all: main.o
	gcc main.o -o test

main.o: main.S
	gcc -c main.S -o main.o

main.S: main_p.c
	gcc -S main_p.c -masm=intel -o main.S

main_p.c: main.c
	gcc -DVAR='999 - 123' -E main.c -o main_p.c

clean:
	rm -rf main_p.c main.S main.o test
