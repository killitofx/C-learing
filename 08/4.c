void main()
{
	int x,temp;
	int result=1;
	printf("��׳ˣ�������һ����\n");
	scanf("%d", &x);
	temp = x;
	while (temp)
	{
		result *= temp;
		temp--;
	}
	printf("%d\n", result);
	//system("pause");
}