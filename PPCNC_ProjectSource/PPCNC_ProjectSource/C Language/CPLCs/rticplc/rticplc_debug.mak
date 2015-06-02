#------------------------------------------------------------------------------
# Copyright (C) Delta Tau Data Systems Inc., 2007
# All rights reserved.
# 
# Generic makefile for any c user mode plc
# For a new project change the following
# 
# 1.) PROG should be assigned the name of the desired executable program
# 2.) SRCS should be assigned the 'C' source code files that need to be compiled
# 3.) issue the command 'make depend' the first time a project is created and
#     (every time an additional 'C' file is added to the project the command 
#     'make depend' must be issued)
# 4.) issue the command make clean 
# 5.) issue the command make
#
# Notes
# --------
# Change DTDEBUG above to -O2 for release w/ optimization
# Change DTDEBUG above to -g3 for debug 
# PMAC_ARCH value can be one of the following
# ppc405,intel,ppc460-2,ppc460-1
#------------------------------------------------------------------------------

PMAC_ARCH=ppc405

ifeq ($(PMAC_ARCH),i386)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-linux-rootfs/usr/src/linux-headers-3.2.21-xenomai-2.6.3
KSRC=/opt/i386-linux-rootfs/usr/src/linux-headers-3.2.21-xenomai-2.6.3
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-linux-rootfs/usr/lib/gcc/i686-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/i386-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/i386-linux-rootfs/usr/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
RPATH=-Wl,-rpath-link,/opt/i386-linux-rootfs/lib/i386-linux-gnu
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-linux-rootfs
endif

ifeq ($(PMAC_ARCH),i386hv)
ARCH=i386
CROSS_COMPILE=i686-meau-linux-gnu-
KDIR=/opt/i386-preemptrt-rootfs/usr/src/linux-3.8.13
KSRC=/opt/i386-preemptrt-rootfs/usr/src/linux-3.8.13
CC=i686-meau-linux-gnu-gcc
AS=i686-meau-linux-gnu-as
LD=i686-meau-linux-gnu-gcc
INCLUDE=/opt/i386-preemptrt-rootfs/usr/lib/gcc/i686-redhat-linux/4.4.4/include
#XENOMAI_INC_DIR=/opt/i386-linux-rootfs/usr/include/xenomai
XENOMAI_LIB_DIR=/opt/i386-preemptrt-rootfs/lib
LIBMATHDIR=/usr/local/dtlibs/libmath
LIBMATH_RPATH=-Wl,-rpath,/opt/ppmac/libmath
ROOTFS_DIR=/opt/i386-preemptrt-rootfs
endif

ifeq ($(PMAC_ARCH),ppc465-2)
ARCH=powerpc
CROSS_COMPILE=powerpc-meau-linux-gnu-
KDIR=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
KSRC=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
CC=powerpc-meau-linux-gnu-gcc
AS=powerpc-meau-linux-gnu-as
LD=powerpc-meau-linux-gnu-gcc
#STRIP=i686-meau-linux-gnu-strip
INCLUDE=/opt/powerpc-465-rootfs/usr/lib/gcc/powerpc-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/include
XENOMAI_LIB_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/lib
RPATH=-Wl,-rpath-link,/opt/powerpc-465-rootfs/lib/powerpc-linux-gnu
ROOTFS_DIR=/opt/powerpc-465-rootfs
endif

ifeq ($(PMAC_ARCH),ppc465-1)
ARCH=powerpc
CROSS_COMPILE=powerpc-meau-linux-gnu-
KDIR=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
KSRC=/opt/powerpc-465-rootfs/usr/src/linux-3.2.21-serengeti-smp
CC=powerpc-meau-linux-gnu-gcc
AS=powerpc-meau-linux-gnu-as
LD=powerpc-meau-linux-gnu-gcc
#STRIP=i686-meau-linux-gnu-strip
INCLUDE=/opt/powerpc-465-rootfs/usr/lib/gcc/powerpc-linux-gnu/4.6/include
XENOMAI_INC_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/include
XENOMAI_LIB_DIR=/opt/powerpc-465-rootfs/usr/local/xenomai-2.6.2.1/lib
RPATH=-Wl,-rpath-link,/opt/powerpc-465-rootfs/lib/powerpc-linux-gnu
ROOTFS_DIR=/opt/powerpc-465-rootfs
endif

ifeq ($(PMAC_ARCH),ppc405)
ARCH=powerpc
CROSS_COMPILE=powerpc-405-linux-gnu-
KDIR=/opt/powerpc-405-rootfs/usr/src/linux-2.6.30.3-xeno-2.5.6
KSRC=/opt/powerpc-405-rootfs/usr/src/linux-2.6.30.3-xeno-2.5.6
CC=powerpc-405-linux-gnu-gcc
AS=powerpc-405-linux-gnu-as
LD=powerpc-405-linux-gnu-gcc
INCLUDE=/usr/local/powerpc-405-linux-gnu/include
XENOMAI_INC_DIR=/opt/powerpc-405-rootfs/usr/local/xenomai-2.5.6/include
XENOMAI_LIB_DIR=/opt/powerpc-405-rootfs/usr/local/xenomai-2.5.6/lib
LIB_DIR=/opt/powerpc-405-rootfs/lib
ROOTFS_DIR=/opt/powerpc-405-rootfs
endif

RTPMACINCLUDEDIR=/usr/local/dtlibs/rtpmac
LIBPPMACINCLUDEDIR=/usr/local/dtlibs/libppmac
export ARCH
export CROSS_COMPILE

CFLAGS =  -mhard-float -funsigned-char --sysroot=$(ROOTFS_DIR) \
-I$(RTPMACINCLUDEDIR) -I$(LIBPPMACINCLUDEDIR) -I$(XENOMAI_INC_DIR) -I$(XENOMAI_INC_DIR)/posix -I$(LIBMATHDIR) \
-D_GNU_SOURCE -D_REENTRANT -D__XENO__
DTDEBUG = -g3

LIBS= -shared
ifneq ($(PMAC_ARCH),i386hv)
LIBS+=-lpthread_rt -lrt -lppmac -lpthread
endif
ifneq ($(ARCH),powerpc)
LIBS+=-lrt -lppmac -lmath -L$(LIBMATHDIR)
endif

LDFLAGS = $(LIBS) --sysroot=$(ROOTFS_DIR) \
 \
-L../../../Bin/Debug/ \
-L$(XENOMAI_LIB_DIR) -L$(LIBPPMACINCLUDEDIR) -L$(LIB_DIR) \
-Wl,-rpath,/var/ftp/usrflash/Project/C\ Language/Libraries \
-Wl,-rpath,/var/ftp/usrflash/Project/Bin/Debug \
-Wl,-rpath,/opt/ppmac/libppmac \
-Wl,-z,defs \
$(LIBMATH_RPATH) \
$(RPATH)

RM = rm -f
PROG = ../../../Bin/Debug/librtiplcc.so
SRCS = \
rticplc.c

OBJS = $(SRCS:.c=.o)
export CROSS_COMPILE=ppc_4xxFP-
export ARCH=powerpc

# now comes a meta-rule for compiling any C source file.
$(PROG): $(OBJS)
	$(LD) -o $(PROG) $(OBJS) $(LDFLAGS) 

%.o: %.c clean
	$(CC) $(CFLAGS) $(DTDEBUG) -c $< 


bclean:
	$(RM) $(PROG) $(OBJS) *.log

clean:
	$(RM) $(PROG) $(OBJS)

depend:
	$(RM) ../../Bin/Debug/dependencyko.lst
	makedepend -f- -- $(CFLAGS) -- $(SRCS) > ../Bin/Debug/dependencyko.lst

#ifneq ($(MAKECMDGOALS),depend)
#include ../Bin/Debug/dependencyko.lst
#endif

