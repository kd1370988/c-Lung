#include<stdio.h>
#include<string.h>
main()
{
	char* p_tbl[] = { "Programming1","Algorithm","Programming2","C"};
	char *hozon1;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j <4 ; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				hozon1 = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = hozon1;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}