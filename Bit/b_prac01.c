#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mod_Num 3
//符号なし整数をUINTで再定義
typedef unsigned int UINT;

typedef struct
{
	char name[20];	//スキル名
	int type;		//スキル種類
	int use_mp;		//使用mp量
	int effect;		//スキル効果
}Skill;

typedef struct
{
	char name[20];	//名前
	int hp;			//HP
	int atk;		//攻撃力
	int def;		//防御力
	UINT state;		//状態
}Spec;

typedef struct
{
	Spec sp;				//Spec型構造体変数
	int maxhp;				//最大HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill型構造体配列
}Chara;

typedef struct
{
	Spec sp;	//Spec型構造体変数
	int rate;	//状態異常攻撃発生レート％表記
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
	printf("=====現在の状態=====\n");
	if (s & Poison)
	{
		printf("|毒\n");
	}
	if (s & Sleep)
	{
		printf("|睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("|麻痺\n");
	}
	if (s & Burn)
	{
		printf("|やけど\n");
	}
	if (s & AtkUp)
	{
		printf("|攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("|攻撃力ダウン\n");
	}
	if (s == base)
	{
		printf("|通常状態\n");
	}
	printf("====================\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:やけど 5:攻撃力↑ 6:攻撃力↓ 0:終了\n");
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
		printf("どの状態を直しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:やけど 5:攻撃力↑ 6:攻撃力↓ 0:終了\n");
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