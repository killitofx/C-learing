#include <stdio.h>
int main()
{
	int i,count = 0;
	for (i = 10; i <= 99; i++)	//10-99循环
	{
		if (i % 2 == 0)			//是二的倍数
		{
			printf("%d ", i);	//输出
			count++;			//统计输出次数
			if (count == 5)		//输出满五个
			{
				count = 0;		//归零重新计数
				printf("\n");	//换行
			}
		}
	}
}