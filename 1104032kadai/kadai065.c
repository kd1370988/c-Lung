#include<stdio.h>
main()
{
	int i, a,sum;
	i = sum =a= 0;
	do
	{
		sum += a;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		i++;
	} while (a != -999);
	printf("���v = %d\n���� = %.2f", sum, (float)sum/(i-1));
}