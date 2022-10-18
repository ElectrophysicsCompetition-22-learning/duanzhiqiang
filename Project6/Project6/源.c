#include <stdio.h>
void main()
{
	int y, leap;
	printf("请输入一个年份:");
	scanf_s("%d", &y);
	if((y%4==0)&&(y%100!=0)||(y%400==0))
	leap = 1;
	else
		leap = 0;
	if (leap == 1)
		printf("%d年是一个闰年", y);
	else
		printf("%d年不是一个闰年", y);
}