#include <stdio.h>

int main(void) 
{
	char str[30];
	scanf("%[^\n]s",str);
	printf("%d",strlen(str));
}
