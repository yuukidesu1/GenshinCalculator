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
	printf("��ɫ��������");
	scanf_s("%d", &GJL);
	printf("�ͷű��ʣ�");
	scanf_s("%f", &SFBL);
	printf("Ԫ���˺��ӳɣ�");
	scanf_s("%f", &YSSHJC);
	printf("��ɵ��˺��ӳɣ���demo����0����");
	scanf_s("%f", &ZCDSHJC);
	printf("�����˺���");
	scanf_s("%f", &BJSH);

	ZZSH = GJL * SFBL * (1 + YSSHJC + ZCDSHJC) * (1 + BJSH) * FYJS * 0.9;


	printf("�����˺���%f", ZZSH);


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
	printf("��ɫ��������");
	scanf_s("%d", &GJL);
	printf("�ͷű��ʣ�");
	scanf_s("%f", &SFBL);
	printf("Ԫ���˺��ӳɣ�");
	scanf_s("%f", &YSSHJC);
	printf("��ɵ��˺��ӳɣ�");
	scanf_s("%f", &ZCDSHJC);
	printf("�����˺���");
	scanf_s("%f", &BJSH);
	printf("Ԫ�ط�Ӧ���ʣ�");
	scanf_s("%f", &YSFYBL);
	printf("Ԫ�ؾ�ͨ���˱��ʣ�������У�:");
	scanf_s("%f", &YSJTZSBL);

	ZZSH = GJL * SFBL * (1 + YSSHJC + ZCDSHJC) * (1 + BJSH) * FYJS * 0.9 * (1 + YSFYBL) * (1 + YSJTZSBL);

	printf("�����˺���%f.\n", ZZSH);

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