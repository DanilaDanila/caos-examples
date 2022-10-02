all:
	arm-linux-gnueabihf-gcc -ggdb main.c foo.s

run:
	qemu-arm -L /usr/arm-linux-gnueabihf a.out

clean:
	rm -rf a.out
