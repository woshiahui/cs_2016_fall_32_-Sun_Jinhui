#include <stdio.h>

int main() {
	float a,b,c,d;
	float e;
	float f;
	printf("input numbers in form c+di,a+bi\n ");
	scanf("%f+%fi,%f+%fi", &a, &b, &c, &d);
	e = (a*a*c+a*c*c+a*d*d+c*b*b)/((a+c)*(a+c)+(b+d)*(b+d));
	f = (a*a*d+c*c*b+b*b*d+b*d*d)/((a+c)*(a+c)+(b+d)*(b+d));
	printf("%.3f+%.3fi", e, f);
	return 0;
}
