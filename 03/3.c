#include <stdio.h>
#include <windows.h>
void main()
{
	printf("这是一个求差的程序，请输入被减数-减数,例如10-5\n");
	Sleep(500);
	printf("10-5\n");
	Sleep(500);
	printf("10.00 减去 5.00 的结果为5.00\n");
	Sleep(500);
	printf("好了，你现在可以尝试开始输入了\n");
loop:
	{
		float a, b, c;
		scanf("%f-%f", &a, &b);
		c = a - b;
		printf("%.2f 减去 %.2f 的结果为%.2f\n", a, b, c);
		goto loop;
	}
		
	system("pause");
}