#include<stdio.h>
main()
{
	int i;
	char a;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &a);
	for (i = 1; a+(char)i <= 'z'; i++)
	{
		printf("%c ", a+ (char)i -0x20);
	}
	printf("\n");
}