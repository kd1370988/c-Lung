#include<stdio.h>
main()
{
	int i;
	char moji[70];
	printf("文字列は？");
	scanf("%s", &moji[0]);
	printf("文字列: ");
	for (i = 0; moji[i] != '\0'; i++)
	{
		printf("%c", moji[i]);
	}
	printf("\t文字数 = %d文字", i);
}