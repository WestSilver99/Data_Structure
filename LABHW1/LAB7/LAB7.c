#include <stdio.h>

int main(void) {

	int i = 10;
	int j = 20;
	printf("i의 값 = %d\n", i);
	printf("j의 값 = %d\n", j);
	printf("i의 메모리 주소(&i) = %u\n", &i);
	printf("j의 메모리 주소(&j) = %u\n", &j);

	printf("\n<< ptr=&i 실행>>\n");
	int* ptr = &i;
	printf("ptr의 메모리 주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %u\n", ptr);
	printf("ptr의 참조 값(*ptr) = %d\n", *ptr);

	printf("\n<< ptr=&j 실행>>\n");
	ptr = &j;
	printf("ptr의 메모리 주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %u\n", ptr);
	printf("ptr의 참조 값(*ptr) = %d\n", *ptr);

	printf("\n<< i=*ptr 실행>>\n");
	
	i = *ptr;
	printf("i의 값 = %d\n", i);


	return 0;
}