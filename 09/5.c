#include <stdio.h>
int main()
{
	int i,count = 0;
	for (i = 10; i <= 99; i++)	//10-99ѭ��
	{
		if (i % 2 == 0)			//�Ƕ��ı���
		{
			printf("%d ", i);	//���
			count++;			//ͳ���������
			if (count == 5)		//��������
			{
				count = 0;		//�������¼���
				printf("\n");	//����
			}
		}
	}
}