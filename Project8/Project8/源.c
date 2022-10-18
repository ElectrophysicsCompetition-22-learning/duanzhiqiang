#include <stdio.h>
#include<math.h>
void main()
{
	double a, b, c, s, area;
	printf("pleaes enter a,b,c:");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		s = 0.5 * (a + b + c);
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("area=%6.2f\n", area);
	}
	else
		printf("it is not a trilateral\n");
}