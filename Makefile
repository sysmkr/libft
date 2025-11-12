# Compiler and archiver
CC = gcc
AR = ar

# Flags
CFLAGS = -Wall -Wextra -Werror

# Outputs
LIB = libft.a
TEST = test

# Find all .c files, but exclude test.c for the library
SRCS = $(filter-out test.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

# Default rule: build the library (exclude test.c here)
all: $(LIB)

# Build the static library from non-test sources
$(LIB): $(OBJS)
	$(AR) rcs $@ $^

# Build test program (links library + test.c)
$(TEST): $(LIB) test.o
	$(CC) $(CFLAGS) -o $@ test.o $(LIB)

# Compile any .c file into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean everything
clean:
	rm -f $(OBJS) test.o $(LIB) $(TEST)

.PHONY: all clean test
