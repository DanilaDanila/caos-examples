#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    int in_fd = open(argv[1], O_RDONLY);
    
    if (in_fd < 0) {
        return 1;
    }

    int nums_fd = open(argv[2], O_WRONLY | O_CREAT, 0666);
    int chars_fd = open(argv[3], O_WRONLY | O_CREAT, 0666);

    if (nums_fd < 0 || chars_fd < 0) {
        return 2;
    }

    while (1) {
        char input;
        int ret_value = read(in_fd, &input, sizeof(input));
        if (ret_value == 0) {
            break;
        } else if (ret_value < 0) {
            close(in_fd);
            close(nums_fd);
            close(chars_fd);
            return 3;
        }

        if (input <= '9' && input >= '0') {
            write(nums_fd, &input, sizeof(input));
        } else {
            write(chars_fd, &input, sizeof(input));
        }
    }

    close(in_fd);
    close(nums_fd);
    close(chars_fd);
    return 0;
}