#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int do_sum(int a, int sum) {
	if (a == 0) {
		return sum;
	}
	else {
		return do_sum(a - 1, sum + a);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, do_sum(n, 0));

	return 0;
}