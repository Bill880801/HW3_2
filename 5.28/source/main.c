#include<stdio.h>
#include<stdlib.h>

char a,b;
char f(x);

int main(void)
{
	printf("�п�J�@�ӭ^��r��: ");
	scanf_s("%c",&a);

	if (a >= 65 && a <= 90)
	{
		printf("\n�z��J���r�����j�g %c �ഫ�L�ᬰ�p�g %c \n\n", a, f(a));
	}
	else if (a >= 97 && a <= 128)
	{
		printf("\n�z��J���r�����p�g %c �ഫ�L�ᬰ�j�g %c \n\n", a, f(a));
	}
	else
	{
		printf("\n��J���~!\n\n");
	}
	system("pause");
	return 0;
}

char f(x)
{	
	if (x >= 65 && x <= 90)											//A = 41H, Z = 5AH 
	{
		b = x + 32;													//A = 41H, a = 61H �t32
	}
	else if (x >= 97 && x <= 128)									//a = 61H, z = 7AH 
	{																//A = 41H, a = 61H �t32
		b = x - 32;													//A = 41H, a = 61H �t32
	}
	return b;
}