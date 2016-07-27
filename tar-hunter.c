#include <stdio.h>

int main(void) {
	int  ar[10],n,i,t,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]+ar[j]==t)
			{
			printf("%d %d",ar[i],ar[j]);
			break;
			}
		}
	}
	// your code goes here
	return 0;
}
