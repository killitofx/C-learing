#include <stdio.h>
void main()
{
	int a;
	printf("������һ����\n");
	scanf("%d", &a);
	printf("%d��",a);
	if (a % 2)
	{
		printf("����  ");
	}
	else
	{
		printf("ż��  ");
	}
	if (a >= 0)
	{
		printf("�Ǹ���\n");
	}
	else
	{
		printf("����\n");
	}
	//system("pause");
}