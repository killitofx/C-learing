#include <stdio.h>
void main()
{
	char a;
	printf("请输入一个字母\n");
	a = getchar();
	printf("您输入的是%c,",a);
	if (a <= 'Z' && a >= 'A')
	{
		a += 32;
		printf("转换后为%c\n",a);
	}
	else if (a <= 'z' && a >= 'a')
	{
		a -= 32;
		printf("转换后为%c\n", a);
	}
	else
	{
		printf("您输入的不是字母，请重新输入");
	}
	system("pause");
}