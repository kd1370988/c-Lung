#include<stdio.h>
main()
{
	int no, h, m, s;
	printf("�b�������:");
	scanf("%d", &no);
	s = no % 60;
	m = ((no - s) % 3600) / 60;
	h = no / 3600;
	if (no > 5000) {
		printf("�G���[�ł�\n");
	}
	else if(no<0) {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
	else {
		printf("%d��%d��%d�b�ł�\n", h, m, s);
	}
}