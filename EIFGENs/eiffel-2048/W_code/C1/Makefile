INCLUDE_PATH = 
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mwindows
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/studio/spec/windows/lib/mingw/wkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/studio/config/windows/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/studio/spec/windows/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL/gcc/windows/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\ 
SYSTEM_IN_DYNAMIC_LIB = eiffel-2048.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  co871.o co871d.o ws870.o ws870d.o ws869.o ws869d.o ws890.o ws890d.o \
	ht868.o ht868d.o bo867.o bo867d.o ht891.o ht891d.o ws866.o ws866d.o \
	wg889.o wg889d.o ht888.o ht888d.o er865.o er865d.o c_864.o c_864d.o \
	ht887.o ht887d.o ce863.o ce863d.o ws885.o ws885d.o ht886.o ht886d.o \
	ws884.o ws884d.o ws883.o ws883d.o ws882.o ws882d.o wg881.o wg881d.o \
	gr880.o gr880d.o da879.o da879d.o ht862.o ht862d.o ht861.o ht861d.o \
	wg877.o wg877d.o da878.o da878d.o wg876.o wg876d.o ht875.o ht875d.o \
	pa860.o pa860d.o wg874.o wg874d.o ad873.o ad873d.o so872.o so872d.o 

all::  Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

