#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void) {

	char student[2][3][20];
	for (int i = 0; i < 2; i++) {
		printf("�л� %d�� �̸� : ", i + 1);
		gets(student[i][0]);
		printf("�л� %d�� �а� : ", i + 1);
		gets(student[i][1]);
		printf("�л� %d�� �й� : ", i + 1);
		gets(student[i][2]);
	}
	for (int i = 0; i < 2; i++) {
		printf("\n\n �л� %d", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("\n\t");
			for (int k = 0; student[i][j][k] != '\0'; k++) {
				printf("%c\n", student[i][j][k]);
			}
		}
	}



	return 0;
}