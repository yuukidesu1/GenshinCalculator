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
int main()
{
	LXSH();

}