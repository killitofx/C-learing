#include <stdio.h>
void main()
{
	int a, b, c, d,max;
	printf("please input four int num\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	printf("在四个数%d,%d,%d,%d中最大的数为%d\n",a,b,c,d,max);
	system("pause");
}
