#include <stdio.h>
void main()
{
	int temp,x,y=0;
	printf("请输入一个自然数\n");
	scanf("%d", &x);
	temp = x;
	while (temp)
	{
		temp /= 10;
		y++;

	}
	printf("%d这个数是%d位数", x,y);
	system("pause");
}