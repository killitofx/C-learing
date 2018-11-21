#include <stdio.h>
void main()
{
	int a, b, c;
	printf("请输入a,b的值\n");
	scanf("%d%d",&a, &b);
	printf("转换前a=%d,b=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("转换后a=%d,b=%d\n",a,b);
	//system("pause");
}