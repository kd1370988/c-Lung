#include<stdio.h>
struct profile
{
	char name[20];
	int burth[3];
	char blood[5];
};
main()
{
	struct profile joho;
	struct profile* p;
	p = &joho;
	printf("���O�����:");
	scanf("%s", &p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &p->burth[0], &p->burth[1], &p->burth[2]);
	printf("���t�^�����:");
	scanf("%s", &p->blood);
	printf("%s--%04d �N %02d �� %02d ���� ���t�^- %s �^\n", p->name, p->burth[0], p->burth[1], p->burth[2], p->blood);
}