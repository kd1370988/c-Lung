#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;

	srand(time(0));
	rand();
	kazu = rand();
	printf("���������ϐ���%d�ł�\n", kazu);
}