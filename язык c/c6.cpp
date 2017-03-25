#include<stdio.h>
#include<math.h>
double fact(int n);
int main()
{
int x,a,n;
double y;
printf("enter a number");
scanf("%d",&x);
for(a=1;a<=x;a++)
y=fact(x);
printf("the factorial is%.1f",y);
return 0;
}
double fact(int n)
{
int i;
double s;
s=1;
for(i=1;i<=n;i++)
s=s*i;
return s;
}
