#include <stdio.h>
int factor(int num, int method)
{
	int i = 1;					//起始值
	int j = 1;					//0包含自身1不包含自身
	int temp = 0;
	int sum = 0;
	int count = 0;
	for (; i <= num - j; i++)	//遍历
	{
		temp = num % i;
		if (!temp)				//判断是否是因子
		{
			count++;			//统计因子个数
			sum += i;			//因子和
			if (method == 0)
			{
				printf("%d ", i);
			}
		}
	}
	if (method == 1)
		return sum;
	if (method == 2)
		return count;
}

void main()
{
	int x,y;
	printf("请输入一个正整数\n");
	scanf("%d", &x);
	y = factor(x,1);	//返回所以因数的和
	if (x == y)
	{
		printf("%d是完全数\n",x);
	}
	else
	{
		printf("%不是完全数\n",x);
	}
}