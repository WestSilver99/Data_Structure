#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	
	int length = 0;
	char str[50];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", &str);
	printf("�Էµ� ���ڿ��� ");
	for (int i = 0; str[i]; i++) {
		printf("%c", str[i]);
		length += 1;
	}
	printf(" �Դϴ�.\n");
	printf("�Էµ� ���ڿ��� ���� = %d �Դϴ�.\n", length);

	return 0;
}