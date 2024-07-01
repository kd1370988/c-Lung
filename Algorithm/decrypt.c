#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 0x1;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}