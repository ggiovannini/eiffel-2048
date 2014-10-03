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

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  ws898.o ws898d.o ws897.o ws897d.o wg895.o wg895d.o ht894.o ht894d.o \
	wg892.o wg892d.o sh924.o sh924d.o wg919.o wg919d.o ws923.o ws923d.o \
	wg922.o wg922d.o ws918.o ws918d.o da914.o da914d.o ws916.o ws916d.o \
	ti910.o ti910d.o ws917.o ws917d.o da913.o da913d.o da911.o da911d.o \
	da912.o da912d.o ti909.o ti909d.o pe915.o pe915d.o ti908.o ti908d.o \
	ti907.o ti907d.o co906.o co906d.o wg896.o wg896d.o wg893.o wg893d.o \
	wg921.o wg921d.o in903.o in903d.o wg920.o wg920d.o in905.o in905d.o \
	in904.o in904d.o in900.o in900d.o in902.o in902d.o in901.o in901d.o \
	in899.o in899d.o 

all::  Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
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

