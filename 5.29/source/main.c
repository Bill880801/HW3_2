#include<stdio.h>
#include<stdlib.h>

int a, b;
int LCM(x, y);

int main(void)
{
	printf("請輸入兩個整數: ");
	scanf_s("%d %d",&a, &b);
	printf("您輸入的兩個整數為%d和%d,這兩個整數的最小公倍數是%d\n",a, b, LCM(a,b));

	system("pause");
	return 0;
}

int LCM(x, y)
{
	int i = 1;
	while (1)
	{
		if (i % x == 0 && i % y == 0)
		{
			return i;
		}
		i++;
	}
}