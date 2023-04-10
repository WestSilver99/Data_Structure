#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recursion(int a, int b);
int main() {
	
	int num;
	printf("별산의 높이를 입력하여 주세요! :");
	scanf("%d", &num);

	recursion(num, 1);
	return 0;
}

void recursion(int finish, int start) {
	if (finish == start) {
		for (int i = 0; i < start; i++) {
			printf("*");
		}
		printf("\n");
		return;
	}
	else {
		for (int i = 0; i < start; i++) {
			printf("*");
		}
		printf("\n");
		start++;
		recursion(finish, start);
	}

}