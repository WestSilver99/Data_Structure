#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	
	int length = 0;
	char str[50];
	printf("문자열을 입력하세요 : ");
	scanf("%s", &str);
	printf("입력된 문자열은 ");
	for (int i = 0; str[i]; i++) {
		printf("%c", str[i]);
		length += 1;
	}
	printf(" 입니다.\n");
	printf("입력된 문자열의 길이 = %d 입니다.\n", length);

	return 0;
}