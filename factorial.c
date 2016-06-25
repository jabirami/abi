#include <stdio.h>
#include<string.h>
int main(void) 
{
long int num,f=1;
scanf("%d",&num);
while(num>0)
{
    //printf("%d",num);
    f=f*num;
    num--;
}
printf("%ld",f);
}
