all:
	# arm-linux-gnueabihf-gcc -static main.c
	arm-linux-gnueabihf-gcc -ggdb main.c

run:
	# qemu-arm -L /home/dmanakov/sysroot a.out
	qemu-arm -L /usr/arm-linux-gnueabihf a.out

clean:
	rm -rf a.out
