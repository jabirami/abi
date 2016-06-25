#include <stdio.h>

int main(void) {
	int n[3],i,max;
	for(i=0;i<3;i++)
		scanf("%d",&n[i]);
		max=n[0];
	for(i=1;i<3;i++)
	{
		if(max<n[i])
		max=n[i];
	}
    printf("max:%d",max);
	return 0;
}
