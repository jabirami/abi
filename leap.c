#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	if(num%400==0)
	printf("leap year");
	else if(num%100==0)
	printf("not a leap year");
	else if(num%4==0)
	printf("leap year");
	else
	printf("not a leap year");
}
