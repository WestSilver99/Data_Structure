#include <stdio.h>

struct employee {
	char name[10];
	int year;
	int pay;
};
int main(void) {

	int i;

	struct employee Lee[4] = { {"이진호", 2014, 4200},{"이한영",2015,3500},{"이상범", 2016,2900} };

	for (i = 0; i < 3; i++) {
		printf("\n이름 : %s", Lee[i].name);
		printf("\n입사 : %d", Lee[i].year);
		printf("\n연봉 : %d\n", Lee[i].pay);

	}

	return 0;
}