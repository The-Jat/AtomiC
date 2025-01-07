CC = gcc
CFLAGS = -Wall -Wextra -g -O3
SRC = $(shell find src -name '*.c')
OBJ = $(SRC:.c=.o)

all: atomic

atomic: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)
	rm -rf $(OBJ)

clean:
	rm -rf $(OBJ) ecc
