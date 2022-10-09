all: static dynamic
	du -sh static.out; du -sh dynamic.out

static: main.o mylib.o
	ld -static *.o -o static.out

dynamic: main.o mylib.o
	ld *.o -o dynamic.out

main.o: main.c
	gcc -nostdlib -c main.c

mylib.o: mylib.s
	gcc -nostdlib -c mylib.s

clean:
	rm -rf *.o *.out
