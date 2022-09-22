all: main.c
	arm-linux-gnueabihf-gcc -static main.c

test:
	qemu-arm -L /home/dmanakov/sysroot a.out

clean:
	rm -rf a.out