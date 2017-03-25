#include <stdio.h>

int Fibonacci(int n)
{
 if( n == 1 || n == 2) 
  return 1;
 else
  return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
 int n;
 
 printf("please input n: ");
 scanf("%d",&n);

 printf("Result: %d\n",Fibonacci(n));
 return 0;
}

