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
	printf("�ō����_�@���O:%s �X�R�A:%d\n", max_name, max_scr);
	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", scr);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		scr++;
	}
	if (scr > max_scr)
	{
		printf("�n�C�X�R�A�X�V�I\n");
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, scr);
		fclose(fp);
	}
	else
	{
		printf("�n�C�X�R�A�X�V�Ȃ炸\n");
	}
}