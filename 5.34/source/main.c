#include<stdio.h>
#include<stdlib.h>

int a, b;
integerPower(base, exponent);

int main(void)
{
	printf("�p��a��b����\n");
	printf("\n�п�Ja(���): ");
	scanf_s("%d", &a);
	printf("\n�п�Jb(�����): ");
	scanf_s("%d", &b);

	if (b > 0)
	{
		printf("\n%d��%d����O%d\n\n", a, b, integerPower(a, b));
	}
	else
	{
		printf("\n%d��0����O1\n\n", a, b);
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

