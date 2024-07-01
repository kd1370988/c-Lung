#include<stdio.h>
main()
{
	char a;
	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if ((a >=0x41 && a <= 0x5A)||(a >= 0x61 && a <= 0x7A))
	{
		printf("%c",a);
	}
	else 
	{
		printf("ERROR");
	}
}