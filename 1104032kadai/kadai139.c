#include<stdio.h>
void hyoji(int kai, char moji);
main()
{
	int a;
	char moji;
	printf("文字？:");
	scanf("%c", &moji);
	printf("整数？:");
	scanf("%d", &a);
	hyoji(a, moji);
}
void hyoji(int kai, char moji)
{
	for (int i = 0; i < kai; i++)
	{
		printf("%c",moji);
	}
	printf("\n");
	return;
}