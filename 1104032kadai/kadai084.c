#include<stdio.h>
main()
{
	int a, b;
	while (1)
	{
		printf("�����P(-999�ŏI��)�H");
		scanf("%d", &a);
		printf("�����Q(-999�ŏI��)�H");
		scanf("%d", &b);
		if (a == -999 || b == -999)break;
		if (b == 0)continue;
		printf("%d / %d = %d\n", a, b, a / b);
	}
	printf("\n");
}