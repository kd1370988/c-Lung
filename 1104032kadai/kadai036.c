#include<stdio.h>
main()
{
	int  a,b;
	printf("����1�H");
	scanf("%d", &a);
	printf("����2�H");
	scanf("%d", &b);
	if(a <b)
	{
		printf("%d�̕���%d���%d������",a,b,b-a);
	}
	else if(a == b)
	{
		printf("%d��%d�͓�����",a,b);
	}
	else 
	{
		printf("%d�̕���%d���%d�傫��", a, b, a - b);
	}
}