#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);
int main(void) {

	int n;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &n);

	printf("�հ�: %d\n", sum(n));

	return 0;
}

int sum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n + sum(n - 1);
	}

}