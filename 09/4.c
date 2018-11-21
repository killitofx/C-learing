#include <stdio.h>
int main()
{
	int i, n;
	printf("请数入一个正整数\n");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n%i == 0) break;
	}
	if (i == n)
		printf("%d是素数",n);
	else
	{
		printf("%d不是素数",n);
	}

}