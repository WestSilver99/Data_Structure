#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char str[20] = "Data Structure!";

	printf("문자 배열 str[] : ");
	for (int i = 0; i < 20; i++) {
		printf("%c", str[i]);
	}
	printf("\n");



	return 0;
}