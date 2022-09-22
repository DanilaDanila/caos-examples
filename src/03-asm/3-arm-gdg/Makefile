all: main.c
	arm-linux-gnueabihf-gcc -static main.c -ggdb

test:
	qemu-arm -L /home/dmanakov/sysroot a.out

gdb_server:
	qemu-arm -L /home/dmanakov/sysroot -g 4321 a.out

gdb_client:
	echo "target remote localhost:1234"

clean:
	rm -rf a.out