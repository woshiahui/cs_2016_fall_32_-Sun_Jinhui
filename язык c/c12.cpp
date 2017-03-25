#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];
  char max;
 int i=1;
 scanf("%s",s);
 max=s[0];
  while(s[i]!='\0')
{ if(max<s[i])
      max=s[i];
  
 i++;
}
  printf("max%c");
} 
 

