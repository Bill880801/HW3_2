#include<stdio.h>
#include<stdlib.h>

int a, b;
int LCM(x, y);

int main(void)
{
	printf("�п�J��Ӿ��: ");
	scanf_s("%d %d",&a, &b);
	printf("�z��J����Ӿ�Ƭ�%d�M%d,�o��Ӿ�ƪ��̤p�����ƬO%d\n",a, b, LCM(a,b));

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