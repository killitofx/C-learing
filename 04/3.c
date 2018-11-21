#include <stdio.h>
void main()
{
	int a, b;
	double avg;
	printf("这是一个求平均数的程序，请输入两个数字\n");
	scanf("%d%d",&a,&b);
	avg = (a + b) / 2.0;
	printf("%d和%d的平均值是%.2f\n",a,b,avg);
	system("pause");
}