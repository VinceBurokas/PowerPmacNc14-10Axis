//---------------------------------------------------------------------------
//  Project PowerPMAC Firmware
//  Delta Tau Data Systems, Inc.
//  Copyright  2007. All Rights Reserved.
//
//  SUBSYSTEM:			User Algo Driver
//  FILE:         		usralgo.c
//  AUTH OR:			Henry Bausley
//
//  OVERVIEW
//  ~~~~~~~~
//  This file is a device driver that exports functions that can be used by other
//  kernel mode modules.  ie. RtPmac.rtl can call functions that are part of this
//  driver for use as user written servo, phase, plc rti, plc rt thread
//  No one should ever have to touch this module! Custom routines are added
//  as additional modules as whatever name the user wants.
//
//  NOTES
//  ~~~~~
//  - The driver must be loaded
//    bash-3.0# insmod /opt/ppmac/usralgo/usralgo.ko
//
//  - A node can be created on the file system the thing you fopen
//   but it is not required.  Could be used by gpos if ioctl's were added
//   bash-3.0# mknod -m 666 /dev/usralgo c 240 0
//
//--------------------------------------------------------------------------------
#include <linux/module.h>
#include <linux/init.h>
#include <linux/version.h>
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/interrupt.h>
#include <linux/sched.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include <linux/vmalloc.h>
#include <linux/mman.h>
#include <linux/slab.h>
#include <RtGpShm.h>


//#define KDBEUG  1

#ifdef KDBEUG
  #define PRINTK(arg)        printk(arg)
#else
  #define PRINTK(arg)
#endif

#define USRALGO_MAJOR 240
#define USRALGO_NAME "usralgo"

struct SHM        *pshm;  // Pointer to shared memory
volatile unsigned *piom;  // Pointer to I/O memory
void              *pushm; // Pointer to user memory


// define which file operations are supported
struct file_operations usralgo_fops =
{
  .owner	=	THIS_MODULE,
  .llseek	=	NULL,
  .read		=	NULL,
  .write	=	NULL,
  .readdir	=	NULL,
  .poll		=	NULL,
  .ioctl  	= 	NULL,
  .mmap	=	NULL,
  .open		=	NULL,
  .flush	=	NULL,
  .release	=	NULL,
  .fsync	=	NULL,
  .fasync	=	NULL,
  .lock		=	NULL,
};

//-----------------------------------------------------------------------
// initialize module -- this what is called when you do insmod ./usralgo.ko
//-----------------------------------------------------------------------
static int __init usralgo_init_module (void)
{
  int i;

  PRINTK(KERN_INFO "initializing module usralgo\n");
  pshm  = GetSharedMemPtr();
  pushm = GetUserBufferPtr();
  piom  = GetIOMemPtr();

  i = register_chrdev (USRALGO_MAJOR, USRALGO_NAME, &usralgo_fops);
  if (i != 0) return - EIO;

  return 0;
}

//-----------------------------------------------------------------------
// close and cleanup module
//-------------------------
static void __exit usralgo_cleanup_module (void)
{
  PRINTK("cleaning up module usralgo\n");
  unregister_chrdev (USRALGO_MAJOR, USRALGO_NAME);
}

module_init(usralgo_init_module);
module_exit(usralgo_cleanup_module);
MODULE_AUTHOR("www.deltatau.com");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Linux Device Driver for usralgo");
