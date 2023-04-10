#include <stdio.h>

int main(void) {

	char* ptrArray[4] = { {"Korea"},{"bucheon"},{"jibong-ro"},{"43¹øÁö"} };
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptrArray[i]);
	}

	ptrArray[2] = "jongro";
	printf("\n\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", ptrArray[i]);
	}
	return 0;
}