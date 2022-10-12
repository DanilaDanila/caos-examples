#include <stdio.h>
#include <stdint.h>

int main() {
	struct {
		char c0;
		char c1;
		char c2;
	} ccc;
	printf("%ld\n", sizeof(ccc));

	struct {
		char c0;
		char c1;
		int16_t i16;
	} cci;
	printf("%ld\n", sizeof(cci));

	struct {
		char c0;
		int16_t i16;
		char c1;
	} cic;
	printf("%ld\n", sizeof(cic));


	struct {
		uint64_t u64;
		char c;
	} u64c;
	printf("%ld\n", sizeof(u64c));

	struct {
		uint64_t u64;
		char c;
	} __attribute__((packed)) u64cp;
	printf("%ld\n", sizeof(u64cp));

	return 0;
}
