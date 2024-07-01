#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
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
	default:printf("エラー");
		break;
	}
	printf("\n");
}