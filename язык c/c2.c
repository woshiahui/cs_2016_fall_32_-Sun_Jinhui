#include <stdio.h>

int main() {
	int day;
	int month;
	int t;
	scanf("%d %d",&day,&month);
        t=month;
	month=day;
	day=t;
	printf("%d %d",day,month);
	return 0;
}
 
