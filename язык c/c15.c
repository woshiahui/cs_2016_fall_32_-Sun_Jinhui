#include<stdio.h>
#include<conio.h>
int main()
{
char a[100]={0},b[100]={0};
int i=0,j=0,k=0,flag=0,cur=0;
printf("please input a string: \n");
scanf( "%s",a );
for(;a[i]!='\0';i++)
{
for( k=0;k<=cur;k++ )
{
if( b[k]==a[i] )
{
flag=1;
break;
}
}
if(flag==0)
{
b[cur] = a[i];
cur++;
}
else
{
flag = 0;
}
}
printf("\nthe last string: \n");
for(i=0;b[i]!='\0';i++)
printf("%c",b[i]);
getch();
return 1;
}