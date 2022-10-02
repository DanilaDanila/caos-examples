#include <stdio.h>
#include <stdint.h>

extern uint16_t MY_UI16;

int main() {
    foo_bar_func();
    printf("%x\n", MY_UI16);
    return 0;
}