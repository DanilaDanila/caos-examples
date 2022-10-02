all:
	arm-linux-gnueabihf-gcc -static main.c

run:
	qemu-arm -L /home/dmanakov/sysroot a.out

clean:
	rm -rf a.out