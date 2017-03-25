#include <stdio.h>  
#include <math.h>    
#include <stdlib.h>  
int main(){  
    float a ;  
    float b;
    float c;
    float delta;  
    float x1=0;  
    float x2=0;  
    
    printf("a,b,c");  
    scanf("%f,%f,%f",&a,&b,&c);  
    delta=b*b-4*a*c;  
    if (a==0)  
    {  
       
        x1=-c/b;  
        printf("a=0£¬x1=%d\n",x1);  
    }  
    if (delta==0)  
    {  
        
        x1=-b/(2*a);  
        printf("delta=0£¬x1=%d\n",x1);  
          
    }  
    if (delta>0)  
    {  
  
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);  
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);  
        printf("delta¡µ0£¬x1=%d£¬x2=%d\n",x1,x2);  
    }  
    if (delta<0)  
    {  
        printf("no");  
    }  
    system("pause");  
    return 0;  
  
}  
