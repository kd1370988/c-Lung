#include<stdio.h>
main()
{
	float suu1,suu2;
	printf("�Q�̎����l�H:");
	scanf("%f%f",&suu1,&suu2);
	printf("�傫���ق��� = ");
	if (suu1 < suu2)
	{
		printf("%.5f", suu2);
	}
	else
	{
		printf("%.5f", suu1);
	}
}