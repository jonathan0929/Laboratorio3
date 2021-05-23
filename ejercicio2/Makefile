CC = gcc
CFLAGS = -Wall -Werror
LDFLAGS =
OBJFILES = factorial.o
TARGET = output

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(TARGET) $(OBJFILES) *~