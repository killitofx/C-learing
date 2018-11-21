#include <stdio.h>
void main()
{
	int a;
	printf("请输入1-13\n");
	scanf("%d", &a);
	switch (a)
	{
	
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:printf("%d",a); break;
	case 1:printf("A"); break;
	case 10:printf("T"); break;
	case 11:printf("J"); break;
	case 12:printf("Q"); break;
	case 13:printf("K"); break;
	default:printf("请重新输入\n"); break;
	}
	//system("pause");
}