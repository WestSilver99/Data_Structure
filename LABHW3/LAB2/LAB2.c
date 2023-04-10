#include <stdio.h>

int main(void) {

	int sale[2][2][4] = { {{63,84,140,130},{157,209,251,312} }, {{ 59,80,130,135 }, { 149,187,239,310 }}
};

	int* ptr = &sale[0][0][0];

	for (int i = 0; i < 16; i++) {
		printf("address : %u  sale %d = %d\n", ptr, i, *ptr);
		ptr++;
	}
	printf("\n");

	return 0;
}