#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void ShowBlood(int Blood) 
{
	for (int i = 0; i < Blood; i++)
	{
		printf("*");
	}
}
int IsgameOver(int BoosBlood, int PlayBlood)
{
	// 判断怪物死亡
	if (BoosBlood <= 0)
	{
		printf("You Win!\n");
		return 1;
	}

	// 判断玩家死亡
	if (PlayBlood <= 0)
	{
		printf("You Lost!\n");
		return 1;
	}
	return 0;
}
int Attack(int Blood , int AtttaValue )
{
	// 扣血
	if (rand() % 2 == 0)
	{
		Blood -= AtttaValue;
	}
	return Blood;

}
int GetInput() 
{

	printf("1.普通攻击\n");
	printf("2.旋风斩\n");

	int Skill = 0;
	while (1)
	{
		scanf("%d", &Skill);

		if (Skill != 1 && Skill != 2)
		{
			printf("无效的技能\n");
			continue;
		}
		break;
	}

	return Skill;

}
void InitGame() 
{
	//初始化随机种子
	srand((unsigned)time(NULL));
}
void GmaneLoop() 
{
	//维护性
	int PlayBlood = 5;  //玩家血量
	int BoosBoold = 10; //怪物血量
	while (1)
	{
		system("cls");

		// 显示怪物血量
		printf("Boss: ");
		ShowBlood(BoosBoold);
		printf("\n");
		// 显示玩家血量
		printf("Play: ");
		ShowBlood(PlayBlood);
		printf("\n");

		int AttackValue = GetInput();
		// 攻击
		BoosBoold = Attack( BoosBoold, AttackValue);
		// 还手
		PlayBlood = Attack( PlayBlood, 1);

		if (IsgameOver(BoosBoold, PlayBlood) == 1)
		{
			break;
		}
	}
}
int main(int argc , char* argv[]) 
{

	InitGame();
	GmaneLoop();

	return 0;
}