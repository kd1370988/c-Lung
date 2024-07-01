
#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%3d", i);
	}
	printf("\ncontinue test program\n");
	i = 1;
	while (i <= 10) {
		if (i == 7) {
			continue;
		}
		printf("%3d", i);
		i++;
	}
}