#include <stdio.h>
void main()
{
	char a;
	printf("����һ����Сдת������������һ����ĸ\n");
	a = getchar();
	if (a > 64 && a < 91)
	{
		printf("%cת����Сд��ĸΪ%c\n",a,a+32);
	}
	else if (a>96 && a < 123)
	{
		printf("%cת��Ϊ��д��ĸΪ%c\n",a, a - 32);
	}
	else
	{
		printf("�����˴������ĸ������������\n");
	}
	system("pause");
}