CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11

SRCS = main.c
OBJS = $(SRCS:.c=.o)
TARGET = cars

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
