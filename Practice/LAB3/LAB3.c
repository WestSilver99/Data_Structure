#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int multiply[9];
	printf("1~9의 정수를 입력하세요: ");

	while (1) {
		scanf("%d", &n);
		if (n < 0 || n>9) {
			printf("\n 1~9의 정수를 입력하세요 :");
		}
		else
			break;
	}

	printf("\n");
	for (int i = 0; i < 9; i++) {
		multiply[i] = (i + 1) * n;
		printf("%d * %d = %d\n", n, i + 1, multiply[i]);
	}







	return 0;
}