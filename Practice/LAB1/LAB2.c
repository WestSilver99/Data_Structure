#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade[3] = {91, 86, 97};
	int score[3] = { 'A','B','C' };
	
	printf("\n ***학년별 취득 학점***\n\n");
	for (int i = 0; i < 3; i++) {
		printf("%d학년 총점 = %d, 등급 = %c\n", i + 1, grade[i], score[i]);
	}


	return 0;
}