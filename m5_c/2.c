#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define N 10000
float mF(float x) 
{
	return x*x;
}

int main()
{
	float s, m, n, x;
	double SU = 0;
	char c;
  	printf("this is the integration of the function y=x^2\n");
	scanf("%c", &c);
	char string[] = "%.zf\n";
	string[2] = c;
	printf("Enter the number_begin:\n ");
	scanf("%f", &m);
	printf("Enter the number_end:\n ");
	scanf("%f", &n);
	s = (n - m) / N;
	x = m + s;
	while (x < n)	{
		SU = SU + 4 * mF(x);
		x = x + s;
		if (x >= n)
		  break;
		SU = SU + 2 * mF(x);
		x = x + s;
	}

	SU = ((s/3)*(mF(m) + mF(n) + SU)); 
	printf(string ,SU);
	return 0;
}