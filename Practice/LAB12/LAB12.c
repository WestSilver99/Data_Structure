#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct employee {
	char name[20];
	int year;
	int pay;
};

int main(void) {

	struct employee Lee[4] = {
		{"����ȣ", 2022, 5200},
		{"���ѿ�", 2023, 4300},
		{"�̻��", 2023, 54500},
		{"�̻��", 2024, 3900},
	};

	for (int i = 0; i < 4; i++) {
		printf("\n�̸� : %s\n", Lee[i].name);
		printf("�Ի� : %d\n", Lee[i].year);
		printf("���� : %d\n", Lee[i].pay);
	}


	return 0;
}