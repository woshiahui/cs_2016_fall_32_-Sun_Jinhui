#include <stdio.h>
#define swap(t,x,y) {t a = x; x = y; y = a;}
int main()
{
	 int x, y;
     scanf("%d %d", &x,&y);
     swap(float,x,y);
     printf("%d %d\n", x ,y);
     return 0;
}