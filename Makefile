.SUFFIXES: .c .o

CC = gcc
CFLAGS += -O2 -Wall -Wextra -lc
LDFLAGS +=

OBJS = code.o test.o
#OBJS = code.o mem.o fetch.o arrange.o execute.o mem_stage.o test.o

test: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o test

clean:
	rm -f test *.o
