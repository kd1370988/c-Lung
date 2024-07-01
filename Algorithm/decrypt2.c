#include<stdio.h>
main()
{
	char s[21];
	int i,k[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[„",i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("ˆÃ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}