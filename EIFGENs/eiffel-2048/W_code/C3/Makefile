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

OBJECTS = big_file_C3_c.o 

OLDOBJECTS =  ap942.o ap942d.o us932.o us932d.o ws941.o ws941d.o ht954.o ht954d.o \
	ht928.o ht928d.o ws925.o ws925d.o ws927.o ws927d.o ws926.o ws926d.o \
	wg946.o wg946d.o se943.o se943d.o ws939.o ws939d.o ws940.o ws940d.o \
	ht929.o ht929d.o ht930.o ht930d.o da952.o da952d.o da951.o da951d.o \
	ti950.o ti950d.o ab953.o ab953d.o ht945.o ht945d.o ws936.o ws936d.o \
	ur955.o ur955d.o ut956.o ut956d.o du949.o du949d.o ht944.o ht944d.o \
	ws938.o ws938d.o ws937.o ws937d.o wg948.o wg948d.o wg931.o wg931d.o \
	in934.o in934d.o wg947.o wg947d.o so933.o so933d.o ex957.o ex957d.o \
	ne935.o ne935d.o 

all::  Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
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

