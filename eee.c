#include <stdio.h>

int main(void) {
	int a,b ,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is greater than b and c");
	else if(b>c&&b>a)
	printf("b is greater than c and a");
	else if(c>b&&c>a)
	printf("c is greater than b and a");

	// your code goes here
	return 0;
}
