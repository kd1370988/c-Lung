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
	printf("名前を入力:");
	scanf("%s", &p->name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &p->burth[0], &p->burth[1], &p->burth[2]);
	printf("血液型を入力:");
	scanf("%s", &p->blood);
	printf("%s--%04d 年 %02d 月 %02d 日生 血液型- %s 型\n", p->name, p->burth[0], p->burth[1], p->burth[2], p->blood);
}