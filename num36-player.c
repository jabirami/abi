#include <stdio.h>
#include<string.h>
int main(void) 
{
	int num,ch,res,c=0;
	scanf("%d %d",&num,&ch);
	while(num>0)
	{
		res=num%10;
		num=num/10;
		if(res==ch)
		c++;
	}
printf("%d",c);
	return 0;
}
