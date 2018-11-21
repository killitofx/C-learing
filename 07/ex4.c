#include <stdio.h>
void main()
{
	int num, a, b, c;
	printf("请输入一个三位正整数\n");
	scanf("%d", &num);
	a = num / 100;
	num %= 100;
	b = num / 10;
	c = num % 10;
	printf("百位数是%d,十位数是%d,个位数是%d\n",a, b, c);
	//system("pause");
}