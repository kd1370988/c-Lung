#include<stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", a - 0x20);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", a + 0x20);
	}
	else
	{
		printf("%c", a);
	}
}