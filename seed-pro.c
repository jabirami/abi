#include <stdio.h>

int main(void) {
	int x,y,ans=1,t,res;
	scanf("%d %d",&x,&y);
	t=x;
	while(x>0)
	{
		res=x%10;
		x=x/10;
		ans=ans*res;
	}
	if((t*ans)==y)
	{
		printf("seed");
	}
	else
	printf("0");
	// your code goes here
	return 0;
}
