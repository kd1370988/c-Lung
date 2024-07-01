#include<stdio.h>
main()
{
	int i;
	char moji[70];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji[0]);
	printf("•¶š—ñ: ");
	for (i = 0; moji[i] != '\0'; i++)
	{
		printf("%c", moji[i]);
	}
	printf("\t•¶š” = %d•¶š", i);
}