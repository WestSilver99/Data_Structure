#include <stdio.h>

struct book {
	char title[30];
	char author[30];
	int price;
};

int main(void) {

	struct book my_book = { "HTML과 CSS","홍길동", 28000 };
	struct book c_book = { "C로 배우는 쉬운 자료구조기초", "이지영", 27000 };

	printf("첫 번째 책의 제목은 %s이고,\n 저자는 %s이며,\n 가격은 %d입니다.\n", my_book.title, my_book.author, my_book.price);
	printf("\n두 번째 책의 제목은 %s이고,\n 저자는 %s이며,\n 가격은 %d입니다.\n", c_book.title, c_book.author, c_book.price);


	return 0;
}