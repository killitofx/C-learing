#include <stdio.h>
void main()
{
	int a;
	printf("������1-1000֮���һ����\n");
	scanf("%d", &a);
	if (a <= 1000 && a >= 1)
	{
		printf("%d��",a);
		if (a <= 9)
		{
			printf("��һλ��\n");
		}
		else if (a > 9 && a <= 99)
		{
			printf("����λ��\n");
		}
		else if (a > 99 && a <= 999)
		{
			printf("����λ��\n");
		}
		else
		{
			printf("����λ��\n");
		}
	}
	else{
		printf("������1-1000֮�����\n");
	}
	//system("pause");
	
}