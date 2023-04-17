#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &x);
	printf("섭씨값은 %.2lf도 입니다.", (5.0 / 9.0) * (x - 32.0));
}