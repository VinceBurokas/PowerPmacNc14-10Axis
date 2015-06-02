#------------------------------------------------------------------------------
# Copyright (C) Delta Tau Data Systems Inc., 2007
# All rights reserved.
# 
# Generic makefile for any c realtime C plc 0, user servo or user phase
# For a new project change the following
# 
# 1.) usralgo-objs should be assigned the 'C' source code files that need to be compiled
# 2.) issue the command 'make depend' the first time a project is created and
#     (every time an additional 'C' file is added to the project the command 
#     'make depend' must be issued)
# 3.) issue the command make clean 
# 4.) issue the command make
#
# Notes
# --------
# Change DTDEBUG above to -O2 for release w/ optimization
# Change DTDEBUG above to -g3 for debug 
#------------------------------------------------------------------------------
ARCH=powerpc
PATH=/opt/eldk-4.2/usr/bin:/opt/eldk-4.2/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games
CROSS_COMPILE=ppc_4xxFP-
KDIR=/opt/eldk-4.2/debian_rootfs/usr/src/linux
KSRC=/opt/eldk-4.2/debian_rootfs/usr/src/linux
CC=/opt/eldk-4.2/usr/bin/powerpc-linux-gcc
AS=/opt/eldk-4.2/usr/bin/powerpc-linux-as
STRIP=/opt/eldk-4.2/usr/bin/powerpc-linux-strip
INCLUDE=/opt/eldk-4.2/debian_rootfs/usr/include
RTPMACINCLUDEDIR=/opt/eldk-4.2/debian_rootfs/opt/ppmac/rtpmac
LIBPPMACINCLUDEDIR=/opt/eldk-4.2/debian_rootfs/opt/ppmac/libppmac
export ARCH
export CROSS_COMPILE

OBJS     := ${patsubst %, %.o, $(MODULES)}
CLEANMOD := ${patsubst %, .%*, $(MODULES)}
PWD      := $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)


obj-m	+= usralgo.o
usralgo-objs := usralgomain.o \
handheld.o

EXTRA_CFLAGS :=   -O2 -DCONFIG_460EX -D_GNU_SOURCE -D_REENTRANT -D__XENO__  -mhard-float -I$(RTPMACINCLUDEDIR) -I$(LIBPPMACINCLUDEDIR) -I$(KSRC)/include/xenomai -I$(KSRC)/include/xenomai/posix -I$(INCLUDE) $(ADD_CFLAGS)
KBUILD_EXTRA_SYMBOLS := /opt/eldk-4.2/debian_rootfs/opt/ppmac/libppmac/Module.symvers

%.o: %.S
	$(CC)  -D__KERNEL__ -x c -E $< -o $*.i
	$(AS)  -mbooke -o $@ $*.i

all::
	cp -f /opt/eldk-4.2/debian_rootfs/opt/ppmac/usralgo/usralgomain.c $(PWD)
	$(MAKE) -C $(KSRC) SUBDIRS=$(PWD) modules
	mv -f usralgo.ko ../../bin/Debug/

modules:
	@echo "$(CFLAGS)"

clean::
	$(RM) *.o .*.o.d .*.o.cmd *.ko
	$(RM) -R .tmp*
	$(RM) .runinfo
	rm -rf .runinfo .tmp* .*.o.d .*.o.cmd .*.cmd *.o *.ko *.mod.c *.i *.so Module.symvers modules.order

