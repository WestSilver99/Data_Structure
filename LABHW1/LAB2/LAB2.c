
#include <stdio.h>

int main(void) {

	int n;
	int multiply[9];

	printf("1~9�� ������ �Է��ϼ��� :");

	while (1) {
		scanf_s("%d", &n);

		if (n < 0 || n>9) {
			printf("1���� 9�� ������ �Է��ϼ���");
		}
		else {
			break;
		}
	}

	printf("\n");

	for (int i = 0; i < 9; i++) {
		multiply[i] = n * (i + 1);
		printf("%d * %d = %d\n", n, i + 1, multiply[i]);
	}


	return 0;
}