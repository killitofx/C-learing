#include <stdio.h>
void main()
{
	int a;
	printf("请输入1-12月\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 3: 
	case 5: 
	case 7: 
	case 8: 
	case 10: 
	case 12:printf("该月有31天\n"); break;
	case 4: 
	case 6:
	case 9:
	case 11:printf("该月有30天\n"); break;
	case 2:printf("该月有28天\n"); break;
	default:printf("请重新输入\n"); break;
	}
	system("pause");
}