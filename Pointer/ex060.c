#include<stdio.h>
main()
{
	int i, flg;
	char data[15] = "Language",tan;
	char* p_data;
	p_data = data;
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &tan);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i=0,flg=0;*p_data;i++)
	{
		if (*p_data == tan)
		{
			printf("%d  ", i+1);
			flg=1;
		}
		p_data++;
	}
	if (flg == 0)
	{
		printf("‚ ‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
	else
	{
		printf("•¶š–Ú‚Å‚·\n");
	}
}