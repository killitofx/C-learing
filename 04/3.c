#include <stdio.h>
void main()
{
	int a, b;
	double avg;
	printf("����һ����ƽ�����ĳ�����������������\n");
	scanf("%d%d",&a,&b);
	avg = (a + b) / 2.0;
	printf("%d��%d��ƽ��ֵ��%.2f\n",a,b,avg);
	system("pause");
}