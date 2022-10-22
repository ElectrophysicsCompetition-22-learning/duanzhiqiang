#include <stdio.h>
#include <math.h>
void main()
{
	int i, k, m;
	printf(" number:");
	scanf_s("%d", &m);
	k = sqrt(m);
	for (i = 2; i <= k; i++)
		if (m % i == 0)break;
	if (i > k)
		printf("%d 是素数\n", m);
	else
		printf("%d 不是素数\n", m);
}