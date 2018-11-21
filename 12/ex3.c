#include<stdio.h>
int main()
{
	int i, j;
	int x, y;
	int max = 0;
	int min = 0;
	int a[10];

	//input
	for (i = 0; i<10; i++)
	{
		printf("input [%d]:", i + 1);
		scanf("%d", &a[i]);
	}

	//find max and min's number
	for (x = 0; x < 10; x++)
	{
		if (a[x]>=a[max])
		{
			max = x;
		}
		else if (a[x]<=a[min])
		{
			min = x;
		}
	}

	//exchange min
	if (a[min] < a[0])
	{
		y = a[0];
		a[0] = a[min];
		a[min] = y;
	}

	//exchange max
	if (a[max] > a[9])
	{
		y = a[max];
		a[max] = a[9];
		a[9] = y;
	}

	//output
	for (j = 0; j<10; j++)
	{
		printf("%d ", a[j]);
	}

	//system("pause");
}
