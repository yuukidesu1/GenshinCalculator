#include <stdio.h>
int LXSH()
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
int main()
{
	LXSH();

}