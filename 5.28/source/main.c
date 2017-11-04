#include<stdio.h>
#include<stdlib.h>

char a,b;
char f(x);

int main(void)
{
	printf("請輸入一個英文字母: ");
	scanf_s("%c",&a);

	if (a >= 65 && a <= 90)
	{
		printf("\n您輸入的字母為大寫 %c 轉換過後為小寫 %c \n\n", a, f(a));
	}
	else if (a >= 97 && a <= 128)
	{
		printf("\n您輸入的字母為小寫 %c 轉換過後為大寫 %c \n\n", a, f(a));
	}
	else
	{
		printf("\n輸入錯誤!\n\n");
	}
	system("pause");
	return 0;
}

char f(x)
{	
	if (x >= 65 && x <= 90)											//A = 41H, Z = 5AH 
	{
		b = x + 32;													//A = 41H, a = 61H 差32
	}
	else if (x >= 97 && x <= 128)									//a = 61H, z = 7AH 
	{																//A = 41H, a = 61H 差32
		b = x - 32;													//A = 41H, a = 61H 差32
	}
	return b;
}