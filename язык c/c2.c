
 
#include<stdio.h>

int main()
{
    int day=19;
    int month=3;
    printf("%d\n",day);
    printf("%d\n",month);
    int t=month+day;
    month=t-month;
    day=t-day;
    printf("%d\n",day);
    printf("%d\n",month);
	return 0;
}
