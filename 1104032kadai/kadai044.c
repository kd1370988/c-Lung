#include<stdio.h>
main()
{
	int a;
	printf("����(-999�œ��͏I��)�H");
	scanf("%d", &a);
	while (a != -999)
	{
		printf("8�i�� = %o   16�i�� = %x\n", a, a);
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &a);
	}
}