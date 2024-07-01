#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20];
	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);
	srand(time(0));
	rand();
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("暗号化文字列は、%s\n", &s[0]);
	printf("暗号化キーは、");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
	printf("\n");
}