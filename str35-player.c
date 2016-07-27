#include <stdio.h>
#include<string.h>
int main(void) 
{
	
	char str[10];
	int n,i;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]==str[i+1])
		{
		printf("%c*",str[i],str[i+1]);
		
		}
		else
		printf("%c",str[i]);
	}
	// your code goes here
	return 0;
}
