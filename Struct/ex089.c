#include<stdio.h>
#include<stdlib.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile joho;
	printf("���O�����:");
	scanf("%s", joho.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &joho.birth[0], &joho.birth[1], &joho.birth[2]);
	printf("���t�^�����:");
	scanf("%s", joho.blood);
	printf("%s--%04d�N%02d��%02d���� ���t�^- %s �^\n", joho.name, joho.birth[0], joho.birth[1], joho.birth[2], joho.blood);
}