#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min_operations(int x)
{
    if (x == 1) {
        return 0; // x가 1이면 이미 1이기 때문에 연산을 하지 않는다.
    }
    else if (x % 2 == 0) {
        return 1 + min_operations(x / 2); // x가 짝수면 2로 나눈다. ex) 10/2 = 5
    }
    else {
        int minus = 1 + min_operations(x - 1);
        int divide = 1 + min_operations((x + 1) / 2);
        /*
        minus는 홀수를 그저 1을 뺀 값이다
        ex) 11-1 = 10
        divide는 홀수에 1을 더한 후 2로 나눈 값이다.
        ex) (11+1)/2 = 6
        위의 두 예시 10과 6은 값이 다르기 때문에 최소연산횟수의 결과에 영향을 미친다. 
        */
        return (minus < divide) ? minus : divide; // 따라서 삼항연산자로 minus와 divide 중 값이 더 작은 값을 반환한다.
    }
}

int main()
{
	int x;
	printf("x 를 입력하세요: ");
	scanf("%d", &x);
	printf("%d 를 1 로 만들기 위한 최소 연산 횟수는 %d 입니다.\n", x, min_operations(x));
	return 0;
}