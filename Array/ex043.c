#include<stdio.h>
main()
{
	char moji[] = "orange";
	int i;
	printf("•¶š—ñ:%s\n", &moji[0]);
	for (i = 0; moji[i] != 0; i++);
	printf("•¶š”‚Í%d•¶š\n", i);
}