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
		{"이진호", 2022, 5200},
		{"이한영", 2023, 4300},
		{"이상원", 2023, 54500},
		{"이상범", 2024, 3900},
	};

	for (int i = 0; i < 4; i++) {
		printf("\n이름 : %s\n", Lee[i].name);
		printf("입사 : %d\n", Lee[i].year);
		printf("연봉 : %d\n", Lee[i].pay);
	}


	return 0;
}