#include <stdio.h>
void main()
{
	float a, b, c, t;
	printf("please enter a,b,c:");
	scanf_s("%f,%f,%f", &a,  &b, & c);
	if(a<b)
	{
		t = a; a = b;  b = t;
	}
	if(a<c)
	{
		t = a; a = c; c = t;
	}
	if(b<c)
	{
		t = b; b = c; c = t;
	}
	printf("%6.2f,%6.2f,%6.2f\n", a, b, c);
}