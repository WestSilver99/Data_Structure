#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);

int main(void) {

	int n, result;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	result = fact(n);

	printf("\n\n %d�� ���丮�� ���� %d�Դϴ�", n, result);

	return 0;

}

long int fact(int n) {
	if (n <= 1) {
		printf("\nfact(1) �Լ� ȣ��!");
		printf("\nfact(1) �� 1 ��ȯ!");
		return 1;
	}
	else {
		int value;
		printf("\nfact(%d) �Լ� ȣ��!", n);
		value = (n * fact(n - 1));
		printf("\nfact(%d) �� %d ��ȯ!", n, value);
		return value;
	}
}