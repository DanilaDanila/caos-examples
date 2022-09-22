all: a.out

a.out: main.o a.o b.o
	gcc main.o a.o b.o -o a.out

a.o: a.h a.c
	gcc -std=c11 -c a.c

b.o: b.h b.c
	gcc -std=c11 -c b.c

main.o: a.h b.h main.c
	gcc -std=c11 -c main.c
	echo "Hello"

clean:
	rm -rf *.o test

test:
	./a.out
