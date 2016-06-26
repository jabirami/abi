#include <stdio.h>

int main(void) {
	int array[1000],h[1000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	for(i=0;i<n;i++)
	h[array[i]]++;
	for(i=0;i<n;i++)
	if(h[array[i]]==1)
	{
	printf("%d\n",array[i]);

	h[array[i]]=0;
	}
	
	// your code goes here
	return 0;
}
