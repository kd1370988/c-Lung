#include<stdio.h>
#include<string.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile joho[5];
	struct profile* p;
	struct day* p1;
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		p1 = &joho[i].birth;
		printf("–¼‘O‚ð“ü—Í:");
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
		scanf("%d%d%d", &p1->nen, &p1->tuki, &p1->hi);
		printf("ŒŒ‰tŒ^‚ð“ü—Í:");
		scanf("%s", p->blood);
		p++;
	}
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		p1 = &joho[i].birth;
		if (p1->tuki == 2)
		{
			printf("%s--%04d”N%02dŒŽ%02d“ú¶ ŒŒ‰tŒ^- %s Œ^\n", p->name, p1->nen, p1->tuki, p1->hi, p->blood);
		}
		p++;
	}
}