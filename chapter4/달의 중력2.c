#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	printf("몸무게를 입력하시오(단위: kg): ");
	scanf("%lf", &x);
	printf("달에서의 몸무게는 %.2lfkg입니다.", x * 0.17);

	return 0;
}