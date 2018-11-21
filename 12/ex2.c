//#pragma warning(disable:4996)
#include<stdio.h>
//one 
int main1()
{
	int i, j;
	int x, y;
	int total = 0;
	float avg = 0;
	int a[15];

	//input
	for (i = 0; i<15; i++)
	{
		printf("input [%d]:", i + 1);
		scanf("%d", &a[i]);
	}
	//exchange
	for (x = 0; x<8; x++)
	{
		y = a[x];
		a[x] = a[15 - x - 1];
		a[15 - x - 1] = y;
	}
	//output
	for (j = 0; j<15; j++)
	{
		printf("%d ", a[j]);
	}

	//system("pause");
}

//two
int main()
{
	int i, j;
	int x, y;
	int total = 0;
	float avg = 0;
	int a[15];
	int b[15];

	for (i = 0; i<15; i++)
	{
		printf("input [%d]:", i + 1);
		scanf("%d", &a[i]);
	}

	for (x = 0; x<15; x++)
	{
		b[x] = a[14 - x];
	}

	for (j = 0; j<15; j++)
	{
		printf("%d ", b[j]);
	}

	//system("pause");
}