#include <stdio.h>
void main()
{
	char a;
	printf("������һ����ĸ\n");
	a = getchar();
	printf("���������%c,",a);
	if (a <= 'Z' && a >= 'A')
	{
		a += 32;
		printf("ת����Ϊ%c\n",a);
	}
	else if (a <= 'z' && a >= 'a')
	{
		a -= 32;
		printf("ת����Ϊ%c\n", a);
	}
	else
	{
		printf("������Ĳ�����ĸ������������");
	}
	system("pause");
}