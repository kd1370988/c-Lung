#include<stdio.h>
main()
{
	int i, a,sum;
	i = sum =a= 0;
	while (1)
	{
		sum += a;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		i++;
		if (a == -999)break;
	} 
	printf("���v = %d\n���� = %.2f", sum, (float)sum/(i-1));
}