#include <stdio.h>
int factor(int num, int method)
{
	int i = 1;					//��ʼֵ
	int j = 1;					//0��������1����������
	int temp = 0;
	int sum = 0;
	int count = 0;
	for (; i <= num - j; i++)	//����
	{
		temp = num % i;
		if (!temp)				//�ж��Ƿ�������
		{
			count++;			//ͳ�����Ӹ���
			sum += i;			//���Ӻ�
			if (method == 0)
			{
				printf("%d ", i);
			}
		}
	}
	if (method == 1)
		return sum;
	if (method == 2)
		return count;
}

void main()
{
	int x, y;
	printf("������һ��������\n");
	scanf("%d", &x);
	y = factor(x, 2);//�������Ӹ���
	if (y > 1)		 //�ж����Ӹ����Ƿ����1
	{
		printf("%d��������\n",x);
	}
	else
	{
		printf("%d������\n", x);
	}

}