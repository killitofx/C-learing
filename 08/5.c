#include <stdio.h>
void main()
{
	int temp,x,y=0;
	printf("������һ����Ȼ��\n");
	scanf("%d", &x);
	temp = x;
	while (temp)
	{
		temp /= 10;
		y++;

	}
	printf("%d�������%dλ��", x,y);
	system("pause");
}