#include <stdio.h>
#include<string.h>
int main(void) 
{
int num,i=0,k,ans[100];
scanf("%d",&num);
while(num>0)
{
    ans[i]=num%10;
    num=num/10;
    i++;
}
for(k=0;k<i;k++)
printf("%d",ans[k]);
} 
