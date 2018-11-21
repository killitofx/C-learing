#include<stdio.h>
void main()
{
	int i, j=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ",i);
			j++;
		}
	}
	printf("\n一共有%d个数能被3和5整除",j);
	//system("pause");
}