#include<stdio.h>
main()
{
	char a;
	printf("1�������́H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("�ϊ����ʂ�%c", a - 0x20);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("�ϊ����ʂ�%c", a + 0x20);
	}
	else
	{
		printf("%c", a);
	}
}