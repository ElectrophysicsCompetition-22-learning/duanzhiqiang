#include <stdio.h>
void main()
{
	int a, b, n;
	printf("********************************************\n");
	printf("            欢迎使用小型计算机              \n");
	printf("             设计人：段治强                 \n");
	printf("********************************************\n");
	printf("                  1.加法运算                \n");
	printf("                  2.减法运算                \n");
	printf("                  3.乘法运算                \n");
	printf("                  4.除法运算                \n");
	printf("                  5.退出                    \n");
	printf("********************************************\n");
	printf("\n");
	printf("请选择:");
	scanf_s("%d", &n);
	switch (n)
	{
	    case 1:printf("请输入两个数:"); scanf_s("%d%d", &a, &b); printf("两数相加是:%d", a + b); break;
		case 2:printf("请输入两个数:"); scanf_s("%d%d", &a, &b); printf("两数相减是:%d", a - b); break;
		case 3:printf("请输入两个数:"); scanf_s("%d%d", &a, &b); printf("两数相乘是:%d", a * b); break;
		case 4:printf("请输入两个数:"); scanf_s("%d%d", &a, &b); printf("两数相除是:%d", a / b); break;
		case 5:exit(0);


	}
}