# include<stdio.h>
void main()
{
	int i = 1, j = 0, k = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 1; k <= 9; k++)
			{
				if (i * 100 + j * 10 + k + j * 100 + k * 10 + k == 532)
					printf("%d%d%d+%d%d%d=532\n",i,j,k,j,k,k);
			}
		}
	}
	//system("pause");
}