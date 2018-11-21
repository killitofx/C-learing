void main()
{
	int x,temp;
	int result=1;
	printf("求阶乘，请输入一个数\n");
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