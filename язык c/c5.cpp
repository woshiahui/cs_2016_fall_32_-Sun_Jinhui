#include<stdio.h>
int main()
{
    float c;
	float f;
    printf("enter the Fahrenheit temperature");
    scanf("%f", &f);
    c=5.0/9.0*(f-32.0);
    printf("Celsius%.1f\n", c);
    return 0;
}
