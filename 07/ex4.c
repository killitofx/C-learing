#include <stdio.h>
void main()
{
	int num, a, b, c;
	printf("������һ����λ������\n");
	scanf("%d", &num);
	a = num / 100;
	num %= 100;
	b = num / 10;
	c = num % 10;
	printf("��λ����%d,ʮλ����%d,��λ����%d\n",a, b, c);
	//system("pause");
}