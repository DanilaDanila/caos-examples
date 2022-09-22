#include "a.h"
#include <stdio.h>

void say_b() {
    hidden_say_b();
}

void hidden_say_a() {
    printf("hello, A!\n");
}