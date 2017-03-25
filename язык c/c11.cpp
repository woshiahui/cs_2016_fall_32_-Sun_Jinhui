#include<stdio.h>
#include<string.h>

int main()
{
char a[33];
int i, num = 0;
scanf("%s", a);

for(i=strlen(a)-1; i>=0; i--)
{
num*=2; 
num+=a[i]-'0';
}
printf("%d\n", num);
return 0;
}

