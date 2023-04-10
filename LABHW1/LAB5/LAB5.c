#include <stdio.h>

int main(void) {

	int array[2][3][4];
	int value = 1;

	for (int i= 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				array[i][j][k] = value;
				printf("array[%d][%d][%d] = %d\n",i,j,k, array[i][j][k]);
				value++;
			}
		}
	}

	return 0;
}