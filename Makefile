CC = gcc
CFLAGS = -Wall -Wextra -pedantic

TARGET = compile

all: $(TARGET)

$(TARGET): compile.c
	$(CC) $(CFLAGS) -o $(TARGET) compile.c

clean:
	rm -f $(TARGET)