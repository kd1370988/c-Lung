#include<stdio.h>
main()
{
	char moji[] = "orange";
	int i;
	printf("文字列:%s\n", &moji[0]);
	for (i = 0; moji[i] != 0; i++);
	printf("文字数は%d文字\n", i);
}