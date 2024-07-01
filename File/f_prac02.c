#include<stdio.h>
main()
{
	int scr = 0,max_scr;
	char ch,name[20],max_name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp,"%s",&max_name);
	fscanf(fp, "%d", &max_scr);
	fclose(fp);
	printf("最高得点　名前:%s スコア:%d\n", max_name, max_scr);
	printf("プレイヤーの名前:");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア:%d('e'で終了)\n", scr);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		scr++;
	}
	if (scr > max_scr)
	{
		printf("ハイスコア更新！\n");
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, scr);
		fclose(fp);
	}
	else
	{
		printf("ハイスコア更新ならず\n");
	}
}