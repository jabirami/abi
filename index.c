#include <stdio.h>

int main(void) {
	int array[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	for(i=0;i<n;i++)
	{
		if(array[i]==i)
		printf("%d\n",array[i]);
	}
	
	// your code goes here
	return 0;
}
