#include <stdio.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

int main(void) {

	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy(Sptr->name, "�̼���");
	Sptr->year = 2015;
	Sptr->pay = 5900;

	printf("�̸�: %s", Sptr->name);
	printf("\n�Ի�: %d", Sptr->year);
	printf("\n����: %d\n", Sptr->pay);

	return 0;
}