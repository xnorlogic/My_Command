APPLICATION = My_Command

#Tool Path
MINGW_TOOL=C:/MinGW/bin

CC=$(MINGW_TOOL)/gcc.exe

all: $(APPLICATION).exe

$(APPLICATION).exe:
	$(CC) $(APPLICATION).c -o $(APPLICATION).exe
	
.PHONY: clean
clean:
	rm $(APPLICATION).exe