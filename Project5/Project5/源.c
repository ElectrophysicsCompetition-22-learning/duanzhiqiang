#include<stdio.h>
void main()
{
	char sex;
	char sports;
	char diet;
	float myheight;
	float faheight;
	float moheight;
	printf("�����к���b�� ��Ů����g��?");
	scanf_s("%ls", &sex);
	printf("������ְֵ����(cm):");
	scanf_s("%f", &faheight);
	printf("��������������(cm):");
	scanf_s("%f", &moheight);
	printf("���Ƿ�ϲ����������(Y/N)?");
	scanf_s("%ls", &sports);
	printf("�Ƿ������õ���ʳϰ�ߵ�����(Y/N)?");
	scanf_s("%ls", &diet);
	if (sex == 'b' || sex == 'B')
		myheight = (faheight + moheight) * 0.54;
	if (sex == 'g' || sex == 'G')
		myheight = (faheight * 0.923 + moheight) / 2.0;
	if (sports == 'Y' || sports == 'y')
		myheight = myheight * (1 + 0.023);
	if (diet == 'Y' || diet == 'y')
		myheight = myheight * (1 + 0.015);
	printf("your future height will be%6.2f(cm)\n", myheight);
}
