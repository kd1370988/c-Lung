#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%s", &a);
	switch (a)
	{
	case'a':printf("America\nAustralia");
		break;
	case'e':printf("England");
		break;
	case'f':printf("France");
		break;
	case'j':printf("Japan");
		break;
	default:printf("�G���[");
		break;
	}
	printf("\n");
}