#include <stdio.h>

int main(void) {

	int i = 10;
	int j = 20;
	printf("i�� �� = %d\n", i);
	printf("j�� �� = %d\n", j);
	printf("i�� �޸� �ּ�(&i) = %u\n", &i);
	printf("j�� �޸� �ּ�(&j) = %u\n", &j);

	printf("\n<< ptr=&i ����>>\n");
	int* ptr = &i;
	printf("ptr�� �޸� �ּ�(&ptr) = %u\n", &ptr);
	printf("ptr�� ��(ptr) = %u\n", ptr);
	printf("ptr�� ���� ��(*ptr) = %d\n", *ptr);

	printf("\n<< ptr=&j ����>>\n");
	ptr = &j;
	printf("ptr�� �޸� �ּ�(&ptr) = %u\n", &ptr);
	printf("ptr�� ��(ptr) = %u\n", ptr);
	printf("ptr�� ���� ��(*ptr) = %d\n", *ptr);

	printf("\n<< i=*ptr ����>>\n");
	
	i = *ptr;
	printf("i�� �� = %d\n", i);


	return 0;
}