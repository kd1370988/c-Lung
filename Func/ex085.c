#include<stdio.h>
void Str_Cat(char* a, char* b);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	Str_Cat(a, b);
	printf("”z—ña:%s\n", a);
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