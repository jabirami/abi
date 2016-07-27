#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[10];
	char str1[10];
	int n,i,j=0;
	scanf("%s",str);
	
n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
	str1[j]=str[i];
	j++;
	}
	str1[j]='\0';
	printf("%s\n",str1);
	for(i=0;i<n;i++)
	{
	if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='i'||str1[i]=='I'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
	continue;
	else
	printf("%c",str1[i]);
	}
	
	
	// your code goes here
	return 0;
}
