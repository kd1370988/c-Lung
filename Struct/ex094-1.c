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
		printf("名前を入力:");
		scanf("%s", p->name);
		printf("生年月日を空白で区切って入力:");
		scanf("%d%d%d", &p1->nen, &p1->tuki, &p1->hi);
		printf("血液型を入力:");
		scanf("%s", p->blood);
		p++;
	}
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		p1 = &joho[i].birth;
		if (p1->tuki == 2)
		{
			printf("%s--%04d年%02d月%02d日生 血液型- %s 型\n", p->name, p1->nen, p1->tuki, p1->hi, p->blood);
		}
		p++;
	}
}