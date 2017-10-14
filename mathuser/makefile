INCLUDEDIR=../include/
TARGET_BIN=mathuser
all: $(TARGET_BIN)

$(TARGET_BIN): main.c printresult.c
	gcc -I../include -Wl,-rpath=../libmath/ main.c printresult.c -o $(TARGET_BIN) -L ../libmath/ -lmath 
clean: 
	rm -vf *.i *.o *.s $(TARGET_BIN)
