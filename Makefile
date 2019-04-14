APPLICATION = My_Command

#Tool Path
MINGW_TOOL=C:/MinGW/bin
CYGWIN_TOOL=C:/cygwin64/bin

RM=$(CYGWIN_TOOL)/rm.exe
CC=$(MINGW_TOOL)/gcc.exe

all: $(APPLICATION).exe

$(APPLICATION).exe:
	$(CC) $(APPLICATION).c -o $(APPLICATION).exe
	
.PHONY: clean
clean:
	$(RM) $(APPLICATION).exe