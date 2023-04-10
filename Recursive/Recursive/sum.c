#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);
int main(void) {

	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);

	printf("합게: %d\n", sum(n));

	return 0;
}

int sum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n + sum(n - 1);
	}

}