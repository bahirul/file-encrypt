# simple makefile for file-encrypt

CC = gcc
CFLAGS = -Wall

SRC = ./src/file-encrypt.c
EXEC = ./bin/file-encrypt

all:
	@echo "Usage: make [install|clean]"

install:
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

clean:
	@if [ -f $(EXEC) ]; then rm $(EXEC); echo "Cleaned"; else echo "Nothing to clean"; fi
