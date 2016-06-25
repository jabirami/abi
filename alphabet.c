#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("alphabets");
	else
	printf("not alphabets");
	// your code goes here
	return 0;
}
