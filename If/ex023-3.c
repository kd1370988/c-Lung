#include<stdio.h>
main()
{
	int han, no1, no2;
	printf("���Z�q�����:");
	scanf("%d", &han);
	printf("�Q�̐��������:");
	scanf("%d%d", &no1, &no2);
	if (han == 1) {
		printf("%d", no1 + no2);
	}
	else if (han == 2) {
		printf("%d", no1 - no2);
	}
	else if (han == 3) {
		printf("%d", no1 * no2);
	}
	else if (han == 4) {
		printf("%d", no1 / no2);
	}
	else {
		printf("�G���[");
	}
}

