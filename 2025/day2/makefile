CC = gcc

TARGET = APP

CFLAGS = -Wall -I./include

#dirs
SRC_D = src/
OUT_D = bin/

SRC = solution.c
PROD = main.c
TESTS = test.c

OBJS = $(%.o = %.c)

all: test

build:

test: 
	$(CC) $(CFLAGS) src/$(TESTS) -o bin/$(TESTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:

.PHONEY: all clean