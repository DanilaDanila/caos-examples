#include <stdio.h>

void my_func() {
	int a = 10;
}

int main() {
	printf("&my_func = 0x%lx\n", (unsigned long)my_func);
	return 0;
}
