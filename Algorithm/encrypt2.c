#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20];
	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	srand(time(0));
	rand();
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("�Í���������́A%s\n", &s[0]);
	printf("�Í����L�[�́A");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
	printf("\n");
}