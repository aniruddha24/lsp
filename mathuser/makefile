INCLUDEDIR=../include
TARGET_BIN=mathuser
all:$(TARGET_BIN)
$(TAGET_BIN):main.c ../libmath/math.c
	gcc -save-temps -I ../include/math.c -o $(TARGET_BIN)
clean:
	rm -vf *.ii *.o *.s $(TARGET_BIN)
