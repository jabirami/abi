#include <stdio.h>
#include<string.h>
int main() {
	char str[100];
	int n,str1[100],i,j=0;
	scanf("%s",str);
n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]<48||str[i]>57)
		break;
		else
		{
		str1[j]=str[i]-48;
		j++;
		}
	}
	
	for(i=0;i<j;i++)
	printf("%d",str1[i]);
	// your code goes here
	return 0;
}
