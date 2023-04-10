#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N_big_nmber(int numbers[], int n) {
	int max, max_idx;
	for (int i = 0; i < n; i++) {
		max = 0;
		for (int j = 0; j < 10; j++) {
			if (max < numbers[j]) {
				max = numbers[j];
				max_idx = j;
			}
		}
		numbers[max_idx] = 0;
	}
	return max;
}

int main(void) {

	int number[10] = { 1,3,5,4,7,6,12,8,9,2 };
	int n;
	scanf("%d", &n);
	printf("%d", N_big_nmber(number,n));

	printf("\n");
	return 0;
}