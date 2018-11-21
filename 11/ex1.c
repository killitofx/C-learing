#include<stdio.h>
void main()
{
	int a, b, c;
	int i = 0;
	int j = 0;
	printf("请输入三个数\n");
	scanf("%d%d%d", &a, &b, &c);
	i = a + b + c;
	j = a*b*c;
	printf("三个数和是%d，积是%d",i,j);
	//system("pause");
}