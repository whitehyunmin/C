#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	printf("삼각형의 밑변: ");
	scanf("%lf", &x);
	printf("삼각형의 높이: ");
	scanf("%lf", &y);
	printf("삼각형의 넓이: %.2lf", x * y / 2);

	return 0;
}