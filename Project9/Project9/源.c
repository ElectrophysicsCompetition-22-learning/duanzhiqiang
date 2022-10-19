#include <stdio.h>
#include<math.h>
void main()
{
	int a;
	double b, c ,d;
	printf("enter a and c:");
	scanf_s("%lf,%d", &c, &a);
	if (a >= 500)b = 0.15;
	else
		if (a >= 300)b = 0.10;
		else
			if (a >= 100)b = 0.075;
			else
				if (a >= 50)b = 0.050;
				else
					b = 0;
	d = a * c * (1 - b);
	printf("d=%10.2f\n",d);

}