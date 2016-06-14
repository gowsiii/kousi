#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swapping the values are:%d %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter swapping the values are:%d %d",a,b);
	// your code goes here
	return 0;
}
