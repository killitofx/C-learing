#include <stdio.h>
void main()
{
	int a;
	printf("请输入一个数，将显示这个数的十进制，八进制，十六进制\n");
	scanf("%d", &a);
	printf("输入的数是%d,八进制是%o,十六进制是%x\n", a, a, a);
	system("pause");
}