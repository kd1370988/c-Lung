#include<stdio.h>
main()
{
	int i, flg;
	char data[15] = "Language",tan;
	char* p_data;
	p_data = data;
	printf("検索文字は？");
	scanf("%c", &tan);
	printf("検索結果は、");
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
		printf("ありませんでした\n");
	}
	else
	{
		printf("文字目です\n");
	}
}