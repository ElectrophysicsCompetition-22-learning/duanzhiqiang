#include<stdio.h>
void main()
{
	char sex;
	char sports;
	char diet;
	float myheight;
	float faheight;
	float moheight;
	printf("你是男孩（b） 还女孩（g）?");
	scanf_s("%ls", &sex);
	printf("请输入爸爸的身高(cm):");
	scanf_s("%f", &faheight);
	printf("请输入妈妈的身高(cm):");
	scanf_s("%f", &moheight);
	printf("你是否喜欢体育锻炼(Y/N)?");
	scanf_s("%ls", &sports);
	printf("是否有良好的饮食习惯等条件(Y/N)?");
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
