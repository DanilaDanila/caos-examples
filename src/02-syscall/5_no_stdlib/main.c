#include <unistd.h>
#include <sys/syscall.h>

long syscall(long number, ...);

void _start() {
    const char Hello[] = "Hello, World!";
    syscall(SYS_write, 1, Hello, sizeof(Hello)-1);
    syscall(SYS_exit, 0);
}
