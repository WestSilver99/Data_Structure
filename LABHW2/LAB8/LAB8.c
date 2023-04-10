#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursion(int a, int b);
int main() {
	int num;

	printf("별산의 높이를 입력하여 주세요! :");
	scanf("%d", &num);

	recursion(1, num);

	printf("\n");
}


int recursion(int finish, int start) {
	if (finish == start) {
		printf("*");
		return 0;
	}
	else {
		for (int i = start; i >= 1; i--) {
			printf("*");
		}
		printf("\n");

		recurion(finish, start - 1);
		return 0;
	}
}