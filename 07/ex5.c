#include <stdio.h>
void main()
{
	int a, b, c;
	printf("������a,b��ֵ\n");
	scanf("%d%d",&a, &b);
	printf("ת��ǰa=%d,b=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("ת����a=%d,b=%d\n",a,b);
	//system("pause");
}