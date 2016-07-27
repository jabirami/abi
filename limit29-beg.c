#include <stdio.h>

int main(void) 
{
	int num,i,ans=0;
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		ans=ans+i;
	}
	printf("%d",ans);
}
