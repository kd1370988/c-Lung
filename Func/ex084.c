#include<stdio.h>
void gyaku(char *p,char *cp);
main()
{
	char str1[256], str2[256];
	printf("•¶Žš—ñH:");
	gets(str1);
	gyaku(str1, str2);
	printf("str1:%s\nstr2:%s\n",str1, str2);
}
void gyaku(char* p, char *cp)
{
	int i, j;
	for (i = 0; *(p + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; j++, i--)
	{
		*(cp + j) = *(p + i);
	}
	*(cp + j) = '\0';
}