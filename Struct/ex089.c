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
	printf("名前を入力:");
	scanf("%s", joho.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &joho.birth[0], &joho.birth[1], &joho.birth[2]);
	printf("血液型を入力:");
	scanf("%s", joho.blood);
	printf("%s--%04d年%02d月%02d日生 血液型- %s 型\n", joho.name, joho.birth[0], joho.birth[1], joho.birth[2], joho.blood);
}