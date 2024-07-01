#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mod_Num 3
//�����Ȃ�������UINT�ōĒ�`
typedef unsigned int UINT;

typedef struct
{
	char name[20];	//�X�L����
	int type;		//�X�L�����
	int use_mp;		//�g�pmp��
	int effect;		//�X�L������
}Skill;

typedef struct
{
	char name[20];	//���O
	int hp;			//HP
	int atk;		//�U����
	int def;		//�h���
	UINT state;		//���
}Spec;

typedef struct
{
	Spec sp;				//Spec�^�\���̕ϐ�
	int maxhp;				//�ő�HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill�^�\���̔z��
}Chara;

typedef struct
{
	Spec sp;	//Spec�^�\���̕ϐ�
	int rate;	//��Ԉُ�U���������[�g���\�L
}Mob;

enum BitState
{
	base = 0,
	Poison=1 << 0,
	Sleep = 1 << 1,
	Paralysis= 1 << 2,
	Burn = 1 << 3,
	AtkUp = 1 << 4,
	AtkDown = 1 << 5
};



void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("=====���݂̏��=====\n");
	if (s & Poison)
	{
		printf("|��\n");
	}
	if (s & Sleep)
	{
		printf("|����\n");
	}
	if (s & Paralysis)
	{
		printf("|���\n");
	}
	if (s & Burn)
	{
		printf("|�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("|�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("|�U���̓_�E��\n");
	}
	if (s == base)
	{
		printf("|�ʏ���\n");
	}
	printf("====================\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U���́� 6:�U���́� 0:�I��\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ𒼂��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U���́� 6:�U���́� 0:�I��\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= (~Poison);
			break;
		case 2:
			*s &= (~Sleep);
			break;
		case 3:
			*s &= (~Paralysis);
			break;
		case 4:
			*s &= (~Burn);
			break;
		case 5:
			*s &= (~AtkUp);
			break;
		case 6:
			*s &= (~AtkDown);
			break;
		default:
			break;
		}
	}
}