#include<stdio.h>
main()
{
	int i, a,sum;
	i = sum =a= 0;
	while (1)
	{
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &a);
		if (a == -999)break;
		if (a < 0)continue;
		sum += a;
		i++;
		
	} 
	printf("‡Œv = %d\n•½‹Ï = %.2f", sum, (float)sum/(i-1));
}