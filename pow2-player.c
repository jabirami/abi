#include <stdio.h>

int main(void) 
{
	int num;
	scanf("%d",&num);
	if(num>0)
	{
	if(num==2)
	printf("yes");
	else if((num%2==0)&&(num%4==0))
	printf("yes");
	else
	printf("no");
	}
	else
	printf("no");
	return 0;
}
