#include<stdio.h>
#include<stdlib.h>

int a, b;
integerPower(base, exponent);

int main(void)
{
	printf("計算a的b次方\n");
	printf("\n請輸入a(整數): ");
	scanf_s("%d", &a);
	printf("\n請輸入b(正整數): ");
	scanf_s("%d", &b);

	if (b > 0)
	{
		printf("\n%d的%d次方是%d\n\n", a, b, integerPower(a, b));
	}
	else
	{
		printf("\n%d的0次方是1\n\n", a, b);
	}
	system("pause");
	return 0;
}

integerPower(base, exponent)
{
	int x;
	if (exponent > 1)
	{
		x = base * integerPower(base, exponent - 1);
		return x;
	}
	else
	{
		return base;
	}
}

