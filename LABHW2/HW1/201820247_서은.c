#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min_operations(int x)
{
    if (x == 1) {
        return 0; // x�� 1�̸� �̹� 1�̱� ������ ������ ���� �ʴ´�.
    }
    else if (x % 2 == 0) {
        return 1 + min_operations(x / 2); // x�� ¦���� 2�� ������. ex) 10/2 = 5
    }
    else {
        int minus = 1 + min_operations(x - 1);
        int divide = 1 + min_operations((x + 1) / 2);
        /*
        minus�� Ȧ���� ���� 1�� �� ���̴�
        ex) 11-1 = 10
        divide�� Ȧ���� 1�� ���� �� 2�� ���� ���̴�.
        ex) (11+1)/2 = 6
        ���� �� ���� 10�� 6�� ���� �ٸ��� ������ �ּҿ���Ƚ���� ����� ������ ��ģ��. 
        */
        return (minus < divide) ? minus : divide; // ���� ���׿����ڷ� minus�� divide �� ���� �� ���� ���� ��ȯ�Ѵ�.
    }
}

int main()
{
	int x;
	printf("x �� �Է��ϼ���: ");
	scanf("%d", &x);
	printf("%d �� 1 �� ����� ���� �ּ� ���� Ƚ���� %d �Դϴ�.\n", x, min_operations(x));
	return 0;
}