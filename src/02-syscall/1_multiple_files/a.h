#include "b.h"
#include <stdio.h>

void say_a() {
    hidden_say_a();
}

void hidden_say_b() {
    printf("hello, B!\n");
}