#include <stdio.h>
const int floor = 10;//total floor num
void draw(int num)
{
	int n = 0;
	for (n = 0; n < num; n++)
	{
		printf("A");
	}
	
}

void main()
{
	//int floor = 3;
	int f = 1;
	for (f = 1; f <= floor; f++)
	{
		draw(f * 2 -1);
		printf("\n");
	}
}
