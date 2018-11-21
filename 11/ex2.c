#include<stdio.h>
void main()
{
	int i, j, k, x, y;
	int list[3];
	int *p = list;
	for (i = 0; i < 3; i++)
	{
		printf("input [%d]:",i+1);
		scanf("%d", p + i);
	}


	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3 - x -1; y++)
		{
			if (list[y]>list[y + 1])
			{
				k = list[y];
				list[y] = list[y+1];
				list[y+1] = k;
			}
		}
	}


	printf("三个数中最大值是%d,最小值是%d\n", list[2], list[0]);
	/*for (j = 0; j < 3; j++)
	{
		printf("%d ", *(p + j));
	}*/
	//system("pause");
}