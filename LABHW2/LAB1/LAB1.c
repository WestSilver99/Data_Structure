#include <stdio.h>

struct book {
	char title[30];
	char author[30];
	int price;
};

int main(void) {

	struct book my_book = { "HTML�� CSS","ȫ�浿", 28000 };
	struct book c_book = { "C�� ���� ���� �ڷᱸ������", "������", 27000 };

	printf("ù ��° å�� ������ %s�̰�,\n ���ڴ� %s�̸�,\n ������ %d�Դϴ�.\n", my_book.title, my_book.author, my_book.price);
	printf("\n�� ��° å�� ������ %s�̰�,\n ���ڴ� %s�̸�,\n ������ %d�Դϴ�.\n", c_book.title, c_book.author, c_book.price);


	return 0;
}