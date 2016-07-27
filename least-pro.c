#include <stdio.h>

int main(void) {
	long int num,i=0,res[10],n,min=100,ans,j;
	scanf("%ld",&num);
	while(num>0)
	{
		res[i]=num%10;
		num=num/10;
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
			if(i!=j)
			{
				ans=res[i]*10+res[j];
				if(min>ans)
				min=ans;
			}
			else
			continue;
			
		}
	}
	printf("%ld",min);

	return 0;
}
