#include<stdio.h>
main()
{
	int scr = 0;
	char ch,name[20];
	FILE* fp;
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
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name,scr);
	fclose(fp);
}