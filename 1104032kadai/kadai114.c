#include<stdio.h>
main()
{
	int i;
	char moji[70];
	printf("������́H");
	scanf("%s", &moji[0]);
	printf("������: ");
	for (i = 0; moji[i] != '\0'; i++)
	{
		printf("%c", moji[i]);
	}
	printf("\t������ = %d����", i);
}