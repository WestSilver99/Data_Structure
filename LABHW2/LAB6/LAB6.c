#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int a, int b);
int main(void) {
	int dan;
	printf("몇단을 만드시겠습니까? :");
	scanf("%d", &dan);
	multiply(dan, 1);

	return 0;
}

int multiply(int a, int b) {
	if (b > 9) {
		return 0;
	}
	else {
		printf("%d x %d = %d 입니다.\n", a, b, a * b);
		return multiply(a, b + 1);
	}
}