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
		printf("���O�����:");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���:");
		scanf("%d%d%d", &p1->nen, &p1->tuki, &p1->hi);
		printf("���t�^�����:");
		scanf("%s", p->blood);
		p++;
	}
	p = &joho[0];
	for (int i = 0; i < 5; i++)
	{
		p1 = &joho[i].birth;
		if (p1->tuki == 2)
		{
			printf("%s--%04d�N%02d��%02d���� ���t�^- %s �^\n", p->name, p1->nen, p1->tuki, p1->hi, p->blood);
		}
		p++;
	}
}