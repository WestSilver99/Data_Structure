#include <stdio.h>
int main(void) {

	int score[3] = { 91,86,74 };
	char grade[3] = { 'A','B','C' };

	printf("\n*** �г⺰ ��� ���� ***\n\n");

	for (int i = 0; i < 3; i++) {
		printf("%d�г� : ���� = %d ��� = %c\n", i + 1, score[i], grade[i]);
	}

	return 0;
}