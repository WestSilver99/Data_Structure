#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade[3] = {91, 86, 97};
	int score[3] = { 'A','B','C' };
	
	printf("\n ***�г⺰ ��� ����***\n\n");
	for (int i = 0; i < 3; i++) {
		printf("%d�г� ���� = %d, ��� = %c\n", i + 1, grade[i], score[i]);
	}


	return 0;
}