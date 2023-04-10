#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);
int main(void) {

	int x, y;
	printf("Enter the two numbers: ");
	scanf("%d %d", &x, &y);
	printf("GCD is %d\n", gcd(x, y));
	return 0;
}

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x & y);
	}
}