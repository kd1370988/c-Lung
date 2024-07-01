#include<stdio.h>
main()
{
	int  a,b;
	printf("®”1H");
	scanf("%d", &a);
	printf("®”2H");
	scanf("%d", &b);
	if(a <b)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢",a,b,b-a);
	}
	else if(a == b)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢",a,b);
	}
	else 
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", a, b, a - b);
	}
}