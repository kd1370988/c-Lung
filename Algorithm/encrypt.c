#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + 0x1;
	}
	printf("%s\n", &s[0]);
}