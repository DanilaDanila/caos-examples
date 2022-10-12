#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	int fd3 = open("/tmp/files/1.txt", O_RDONLY);
	int fd4 = open("/tmp/files/2.txt", O_RDONLY);

	printf("fd3: %d\n", fd3);
	printf("fd4: %d\n", fd4);

	close(fd3);

	int fd5 = open("/tmp/files/3.txt", O_RDONLY);
	printf("fd5: %d\n", fd5);
	close(fd4);
	close(fd5);
	return 0;
}
