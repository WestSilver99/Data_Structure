#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int sale[2][4] = { {63,84,140,130},{157,209,251,312} };
	int* ptr = &sale[0][0];

	for (int i = 0; i < 8; i++) {
		printf("\naddress : %u sale %d = %d", ptr, i, *ptr);
		ptr++;
	}
	printf("\n");

	return 0;
}