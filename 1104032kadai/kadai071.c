#include<stdio.h>
main()
{
	int a, b;
	char c;
	
	printf("®”‚PH");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	printf("‰‰ZqH");
	scanf("%s", &c);
	switch (c)
	{
	case '+': printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':printf(" %d - %d = %d", a, b, a - b);
		break;
	case '*':printf(" %d * %d = %d", a, b, a * b);
		break;
	case '/':printf(" %d / %d = %d", a, b, a / b);
		break;
	default:printf(" %d “ %d = %d", a, b, a % b);
		break;
	}
	printf("\n");
}