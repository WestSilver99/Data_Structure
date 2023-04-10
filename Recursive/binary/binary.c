#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n);

int main(void) {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	binary(n);

	printf("\n");
	
	return 0;
}

void binary(int n) {
	if (n == 0 || n == 1) {
		printf("%d", n);
	}
	else {
		binary(n / 2);
		printf("%d", n % 2);
	}
}