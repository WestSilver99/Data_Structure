#include <stdio.h>

struct employee {
	char name[10];
	int year;
	int pay;
};
int main(void) {

	int i;

	struct employee Lee[4] = { {"����ȣ", 2014, 4200},{"���ѿ�",2015,3500},{"�̻��", 2016,2900} };

	for (i = 0; i < 3; i++) {
		printf("\n�̸� : %s", Lee[i].name);
		printf("\n�Ի� : %d", Lee[i].year);
		printf("\n���� : %d\n", Lee[i].pay);

	}

	return 0;
}