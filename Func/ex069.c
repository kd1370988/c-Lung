#include<stdio.h>
main()
{
	int a, sum, i;
	printf("�����F");
	i = 0;
	sum = 0;
	while (scanf("%d", &a) != EOF)
	{
		sum += a;
		i++;
		printf("�����F");
	}
	printf("���v = %d   ���� = %.2f\n", sum, (float)sum / i);
}