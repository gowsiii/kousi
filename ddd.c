#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if((('a'<=a)&&(a>='z'))||(('A'<=a)&&(a>='Z')))
     printf("The given character is an alphabet");
     else
     printf("The given character is not an alphabet");
	// your code goes here
	return 0;
}
