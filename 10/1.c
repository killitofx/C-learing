# include<stdio.h>
void main()
{
	int i, j;
	int result = 1;
	for (i = 1; i <= 10; i++)
	{
		result = 1;
		for (j = 1; j <= i; j++)
		{
			
			result = result * j;
			
		}
		printf("%d!=%d\n", i, result);
		
	}
}