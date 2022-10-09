all:
	gcc main.c -O0 -fno-stack-protector -mno-red-zone

configure:
	sudo bash -c 'echo 0 > /proc/sys/kernel/randomize_va_space'

compile:
	gcc -S -fno-stack-protector -mno-red-zone -z execstack -ggdb main.c
	# gcc main.c -O0 -Wl,-z,stack-size=16384 -fno-stack-protector -mno-red-zone

assemble:
	gcc -ggdb main.s

clean:
	rm -rf *.o a.out *.s
