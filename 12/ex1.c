#include<stdio.h>
int main()
{
	int i, j;
	int total = 0;
	float avg = 0;
	int a[10];
	for (i = 0; i<10; i++)
	{
		printf("input [%d]:", i + 1);
		scanf("%d", &a[i]);
	}
	for (j = 0; j<10; j++)
	{
		total += a[j];
	}
	avg = total / 10.0;
	printf("total is:%d, average is : %.2f", total, avg);
	//system("pause");
}