#include <stdlib.h> 
#include <stdio.h>

double m(double *x, int n)
{
	double a, b;
	int i=0;
	a=x[1];
	for (i = 0; i< n; ++i)
	{
		if (a<x[i]){
			a=x[i];
		}
	}
	b=x[1];
 	for (i = 0; i< n; ++i)
	{
		if (b>x[i]){
			b=x[i];
		}
	}
	return a - b;
}

int main()
{   double s;
	int n;
	int i=0;
	
	printf("please input:\n");
	scanf("%d", &n);
	double *x = (double*)malloc(n*20);
	printf("enter:\n ");
	for (i = 0; i < n; ++i){
	scanf("%lf", &x[i]);
	}
	s=m(x, n);
	printf("%lf\n", s);
	return 0;
}