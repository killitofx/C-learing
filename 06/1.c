#include <stdio.h>
void main()
{
	unsigned char a;
	printf("please input a file\n");
	scanf("%d", &a);
	a = a & 0xFD;
	a = a | 0x4;
	printf("%d\n", a);
	system("pause");
}