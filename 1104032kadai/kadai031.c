#include<stdio.h>
main()
{
	float suu1,suu2;
	printf("‚Q‚Â‚ÌÀ”’lH:");
	scanf("%f%f",&suu1,&suu2);
	printf("‘å‚«‚¢‚Ù‚¤‚Í = ");
	if (suu1 < suu2)
	{
		printf("%.5f", suu2);
	}
	else
	{
		printf("%.5f", suu1);
	}
}