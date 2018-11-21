#include <stdio.h>
void main()
{
	int a;
	printf("请输入1-1000之间的一个数\n");
	scanf("%d", &a);
	if (a <= 1000 && a >= 1)
	{
		printf("%d是",a);
		if (a <= 9)
		{
			printf("是一位数\n");
		}
		else if (a > 9 && a <= 99)
		{
			printf("是两位数\n");
		}
		else if (a > 99 && a <= 999)
		{
			printf("是三位数\n");
		}
		else
		{
			printf("是四位数\n");
		}
	}
	else{
		printf("请输入1-1000之间的数\n");
	}
	//system("pause");
	
}