#include<stdio.h>
main()
{
	char moji1;
	moji1 = 'A';
	printf("moji:%c\n",moji1);
	printf("小文字に変換:%c\n", moji1 + 0x20);
}