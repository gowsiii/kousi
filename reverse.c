#include <stdio.h>

int main(void) {
	int n,rem,m,reversenum=0;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		reversenum=reversenum*10+rem;
	}
	printf("Reverse of %d is %d",m,reverse);
	// your code goes here
	return 0;
}
