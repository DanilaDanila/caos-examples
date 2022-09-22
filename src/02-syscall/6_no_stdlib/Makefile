all: main.o test.o
	ld *.o

main.o: main.c
	gcc -c main.c

test.o: test.s
	gcc -c test.s

clean:
	rm -rf *.o a.out