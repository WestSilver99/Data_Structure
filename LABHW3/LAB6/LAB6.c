#include <stdio.h>

int main(void) {

	int A[2][2] = { {1,2},{3,4} };
	int B[2][2] = { {5,6},{7,8} };
	int S[2][2];

	int sum;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum = A[i][j] + B[i][j];
			S[i][j] = sum;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", S[i][j]);
		}
		printf("\n");
	}

	return 0;
}