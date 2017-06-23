#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return x*x;
}

int main()
{
	float s,x, begin,end;
	float SU = 0, SU1=0, SU2=0;
	printf("this is the differentiation of function y=x^2\n");
	printf("Enter the number_begin:\n");
	scanf("%f", &begin);
	printf("Enter the number_end:\n");
	scanf("%f", &end);
	printf("Enter the number_step:\n");
	scanf("%f", &s);
	x = begin;
	SU1 =(1 / (2 * s))*((-3) * f(x) + 4 * (f(x+s)) - (f(x+2*s)));
	SU2 = (1 / (2 * s))*(-f(x) + f(x + 2 * s));
	printf("%f\n", SU1);
	printf("%f\n", SU2);
	while  (x+2*s <=end)
	{
		SU = (1 / (2 * s))*(f(x) - 4 * (f(x + s))+3*(f(x+2*s)));
		x = x + s;
		printf("%f\n", SU);
	}
	
return 0;

}