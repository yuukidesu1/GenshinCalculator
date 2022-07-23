#include <stdio.h>
int single_mode(void)
{
	int GJL;
	float SFBL;
	float YSSHJC;
	float ZCDSHJC;
	float BJSH;
	float FYJS = 0.505;
	float ZZSH;
	printf("角色攻击力：");
	scanf_s("%d", &GJL);
	printf("释放倍率：");
	scanf_s("%f", &SFBL);
	printf("元素伤害加成：");
	scanf_s("%f", &YSSHJC);
	printf("造成的伤害加成（此demo输入0）：");
	scanf_s("%f", &ZCDSHJC);
	printf("暴击伤害：");
	scanf_s("%f", &BJSH);

	ZZSH = GJL * SFBL * (1 + YSSHJC + ZCDSHJC) * (1 + BJSH) * FYJS * 0.9;


	printf("最终伤害：%f", ZZSH);


	return 0;

}
int element_reaction()
{
	int GJL;
	float SFBL;
	float YSSHJC;
	float ZCDSHJC;
	float BJSH;
	float FYJS = 0.505;
	float ZZSH;
	float YSFYBL;
	float YSJTZSBL;
	printf("角色攻击力：");
	scanf_s("%d", &GJL);
	printf("释放倍率：");
	scanf_s("%f", &SFBL);
	printf("元素伤害加成：");
	scanf_s("%f", &YSSHJC);
	printf("造成的伤害加成：");
	scanf_s("%f", &ZCDSHJC);
	printf("暴击伤害：");
	scanf_s("%f", &BJSH);
	printf("元素反应倍率：");
	scanf_s("%f", &YSFYBL);
	printf("元素精通增伤倍率（面板上有）:");
	scanf_s("%f", &YSJTZSBL);

	ZZSH = GJL * SFBL * (1 + YSSHJC + ZCDSHJC) * (1 + BJSH) * FYJS * 0.9 * (1 + YSFYBL) * (1 + YSJTZSBL);

	printf("最终伤害：%f.\n", ZZSH);

	return 0;
}
int main(void)
{
	char word;
	printf("which mode?\n");
	printf("A: The single mode.\n");
	printf("B: The element reaction.\n");
	scanf_s("%c", &word);

	if (word == 'A')
	{
		single_mode();
	}
	else if(word == 'B')
	{
		element_reaction();
	}
	else
	{
		printf("input error.");
	}

	return 0;
}