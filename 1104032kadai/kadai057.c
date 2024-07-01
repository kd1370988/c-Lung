#include<stdio.h>
main()
{
	int i;
	char a;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (i = 1; a+(char)i <= 'z'; i++)
	{
		printf("%c ", a+ (char)i -0x20);
	}
	printf("\n");
}