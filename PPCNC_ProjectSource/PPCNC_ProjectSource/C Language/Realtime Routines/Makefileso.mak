#------------------------------------------------------------------------------
# Copyright (C) Delta Tau Data Systems Inc., 2007
# All rights reserved.
# 
# Generic makefile for any c realtime C plc 0, user servo or user phase
# For a new project change the following
# 
# 1.) SRCS should be assigned the 'C' source code files that need to be compiled
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
CC = /usr/local/bin/powerpc-405-linux-gnu-gcc
CPP = /usr/local/bin/powerpc-405-linux-gnu-g++
LD = /usr/local/bin/powerpc-405-linux-gnu-gcc

CFLAGS = -mhard-float -funsigned-char \
-I/opt/eldk-4.2/debian_rootfs/opt/ppmac/rtpmac \
-I/opt/eldk-4.2/debian_rootfs/opt/ppmac/libppmac \
-I/opt/eldk-4.2/debian_rootfs/usr/local/xenomai/include \
-I/opt/eldk-4.2/debian_rootfs/usr/local/xenomai/include/posix \
-D_GNU_SOURCE -D_REENTRANT -D__XENO__

DTDEBUG = -g3

LDFLAGS = -shared -lpthread_rt -lrt \
 \
-L../../Bin/Debug/ \
-L/opt/eldk-4.2/debian_rootfs/usr/local/xenomai/lib \
-lppmac -L/usr/local/dtlibs/libppmac \
-Wl,-rpath,/var/ftp/usrflash/Project/C\ Language/Libraries \

RM = rm -f
PROG = ../../Bin/Debug/usralgo.so
SRCS = \
handheld.c

OBJS = $(SRCS:.c=.o)
export CROSS_COMPILE=ppc_4xxFP-
export ARCH=powerpc

# now comes a meta-rule for compiling any C source file.
$(PROG): $(OBJS)
	$(LD) -o $(PROG) $(OBJS) $(LDFLAGS) 

%.o: %.c
	$(CPP) $(CFLAGS) $(DTDEBUG) -c $<
	$(CC) $(CFLAGS) $(DTDEBUG) -c $< 


clean:
	$(RM) $(PROG) $(OBJS)

depend:
	$(RM) ../../Bin/Debug/dependencyko.lst
	makedepend -f- -- $(CFLAGS) -- $(SRCS) > ../Bin/Debug/dependencyko.lst

#ifneq ($(MAKECMDGOALS),depend)
#include ../Bin/Debug/dependencyko.lst
#endif

