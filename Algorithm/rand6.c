#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int user,cpu;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[��");
	scanf("%d", &user);
	srand(time(0));
	rand();
	cpu = rand() % 3;
	user--;
	if (user >= 0 && user <= 2)
	{
		if (user == 0) printf("�v���C���[�̓O�[�ł��B\n");
		if (user == 1) printf("�v���C���[�̓`���L�ł��B\n");
		if (user == 2) printf("�v���C���[�̓p�[�ł��B\n");

		if (cpu == 0) printf("�R���s���[�^�[�̓O�[�ł��B\n");
		if (cpu == 1) printf("�R���s���[�^�[�̓`���L�ł��B\n");
		if (cpu == 2) printf("�R���s���[�^�[�̓p�[�ł��B\n");

		if (user == cpu)
		{
			printf("�������ł��B\n");
		}
		if (user == 0)
		{
			if (cpu == 1)printf("�v���C���[�̏����ł��B\n");
			if (cpu == 2)printf("�R���s���[�^�[�̏����ł��B\n");
		}
		if (user == 1)
		{
			if (cpu == 2)printf("�v���C���[�̏����ł��B\n");
			if (cpu == 0)printf("�R���s���[�^�[�̏����ł��B\n");
		}
		if (user == 2)
		{
			if (cpu == 0)printf("�v���C���[�̏����ł��B\n");
			if (cpu == 1)printf("�R���s���[�^�[�̏����ł��B\n");
		}
	}
	else
	{
		printf("�G���[�ł��B\n");
	}
}