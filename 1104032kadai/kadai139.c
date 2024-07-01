#include<stdio.h>
void hyoji(int kai, char moji);
main()
{
	int a;
	char moji;
	printf("•¶šH:");
	scanf("%c", &moji);
	printf("®”H:");
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