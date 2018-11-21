#include<stdio.h>
int suShu(int num)
{
	int i;
	for (i = 2; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			break;
		}
	}
	if (i == num)
		return 1;
	else
		return 0;
}

void main()
{
	int m, n, add=0,num=0;
	float avg;
	int i,j;
	printf("请输入素数的范围");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (suShu(i))
		{
			add += i;
			num++;
			printf("%d ", i);
		}
	}
	printf("\n一共有%d个数,和为%d,平均数为%.2f\n", num,add,(float)add/num);
	//system("pause");
}