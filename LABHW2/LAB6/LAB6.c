#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int a, int b);
int main(void) {
	int dan;
	printf("����� ����ðڽ��ϱ�? :");
	scanf("%d", &dan);
	multiply(dan, 1);

	return 0;
}

int multiply(int a, int b) {
	if (b > 9) {
		return 0;
	}
	else {
		printf("%d x %d = %d �Դϴ�.\n", a, b, a * b);
		return multiply(a, b + 1);
	}
}