#include <stdio.h>
void main()
{
	double p = 1.307556e9, r = 0.01;
	int y;
	for (y = 2005; p < 1.5e9; y++)
		p = p * (1 + r);
	printf("year=%d,p=%e\n", y , p);
}