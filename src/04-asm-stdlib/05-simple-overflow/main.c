#include <stdio.h>
#include <string.h>

int main() {
    char user_input[8];
    char password[8] = "1234567";

    printf("Введите пароль: ");
    scanf("%s", user_input);

    if (strcmp(user_input, password) == 0) {
        printf("SECRET: вы красавчек!\n");
    } else {
        printf("Permission denied!\n");
    }
    return 0;
}