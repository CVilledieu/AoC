CC = gcc

CFLAGS = -Wall 

SRCS = src/main.c

OBJS = $(SRCS:.c=.o)

TARGET = app


all: clean_old build clean run

build: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

clean_old:
	rm -f $(TARGET)

run:
	./app

.PHONY:  clean_old build clean run
