#include <stdio.h>
void main()
{
	int a;
	printf("请输入一个数\n");
	scanf("%d", &a);
	printf("%d是",a);
	if (a % 2)
	{
		printf("奇数  ");
	}
	else
	{
		printf("偶数  ");
	}
	if (a >= 0)
	{
		printf("非负数\n");
	}
	else
	{
		printf("负数\n");
	}
	//system("pause");
}