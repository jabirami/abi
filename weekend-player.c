#include <stdio.h>
#include<string.h>
int main() {
	int i;
	char str[7][10]={"sunday","monday","tuesday","wednesday","thrusday","friday","saturday"};
	char get[10];
	scanf("%s",get);
	for(i=0;i<7;i++)
	{
		if((strcmp(str[i],get)==0))
		 {
		 	if(i==0)
		 	printf("false");
		 	else
		 	printf("true");
		 }
	}
	return 0;
}
