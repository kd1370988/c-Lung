#include<stdio.h>
main()
{
	float suu1,suu2;
	printf("�Q�̎����l�H:");
	scanf("%f%f",&suu1,&suu2);
	printf("* * * %f * * * %f * * *\n",suu1,suu2);
	printf("�a = %.5f �� = %.5f �� = %.5f �� = %.5f\n", suu1 +suu2, suu1 - suu2, suu1 * suu2,suu1/suu2);
}