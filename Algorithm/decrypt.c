#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 0x1;
	}
	printf("復号済み文字列は、%s\n", &s[0]);
}