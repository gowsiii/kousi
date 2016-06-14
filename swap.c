#include <stdio.h>

int main(void) {
	int a,b,temp;
	scanf("%d%d",&a,&b);
	printf("Before swapping the values are:%d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping the values are:%d %d",a,b);
	// your code goes here
	return 0;
}
