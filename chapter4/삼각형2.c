#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &x);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &y);
	printf("�ﰢ���� ����: %.2lf", x * y / 2);

	return 0;
}