#include<stdio.h>
void Str_Cat(char* a, char* b);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	Str_Cat(a, b);
	printf("�z��a:%s\n", a);
}
void Str_Cat(char* a, char* b)
{
	while (*a)
	{
		a++;
	}
	while(*b)
	{
		*a = *b;
		a++;
		b++;
	}
	*a = '\0';
}