#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile joho[5];
	struct profile* p;
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		printf("%dl–Ú(–¼‘O):",i+1);
		scanf("%s", p->name);
		printf("%dl–Ú(¶”NŒŽ“ú):",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^):",i+1);
		scanf("%s", p->blood);
		p++;
	}
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(p->blood , "A") == 0 || strcmp(p->blood,"a")==0)
		{
			printf("%s--%04d”N%02dŒŽ%02d“ú¶ ŒŒ‰tŒ^- %s Œ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}