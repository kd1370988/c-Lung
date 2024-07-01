#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a >=0x41 && a <= 0x5A)
	{
		printf("その文字は「大文字」です");
	}
	else if(a>=0x61 && a<=0x7A)
	{
		printf("その文字は「小文字」です");
	}
}