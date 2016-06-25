#include <stdio.h>
#include<string.h>
int main(void) 
{
char str[100],str1[100];
int i,j;
scanf("%s",str);
int n=strlen(str);
for(i=0,j=n-1;i<n,j>=0;i++,j--)
str1[i]=str[j];
str1[i]='\0';
printf("%s",str1);
}
