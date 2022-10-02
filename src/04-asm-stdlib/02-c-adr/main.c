#include <stdio.h>

extern void _start(void);
void foo(void) {}

int global = 0;

int main() {
    int local = 0;

    printf("_start  : 0x%x\n", (unsigned int)_start);
    printf("main    : 0x%x\n", (unsigned int)main);
    printf("foo     : 0x%x\n", (unsigned int)foo);
    printf("printf  : 0x%x\n", (unsigned int)printf);
    printf("&global : 0x%x\n", (unsigned int)&global);
    printf("&local  : 0x%x\n", (unsigned int)&local);
}