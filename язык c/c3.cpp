#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
	float r2;
	float r1;
    printf("r1£¬r2=£º");
    scanf("%f %f",&r1,&r2);
    r=1/(1/r1+1/r2);
    printf("Parallel resistance%f\n",r);
    return 0;
}
