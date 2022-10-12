#include <unistd.h>

int main() {
    char str[] = "Hello!!!\n";
    write(7, str, sizeof(str) - 1);
    return 0;
}
