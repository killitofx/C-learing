#include <stdio.h>
void main()
{
	char a;
	printf("这是一个大小写转换程序，请输入一个字母\n");
	a = getchar();
	if (a > 64 && a < 91)
	{
		printf("%c转换成小写字母为%c\n",a,a+32);
	}
	else if (a>96 && a < 123)
	{
		printf("%c转换为大写字母为%c\n",a, a - 32);
	}
	else
	{
		printf("输入了错误的字母，请重新输入\n");
	}
	system("pause");
}