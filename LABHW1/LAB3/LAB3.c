#include <stdio.h>

int main(void) {

	char str[20] = "Data Structure!";

	printf("���� �迭 str[] : ");

	for (int i = 0; str[i]; i++) {
		printf("%c", str[i]);
	}

	printf("\n");
	return 0;
}