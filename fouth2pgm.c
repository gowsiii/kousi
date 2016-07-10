#include <stdio.h>

int main(void) {
	int k,n,rem=0;
	scanf("%d%d",&n,&k);
	if(n>0)
	{
	while(k!=0)
	{
		rem=n%10;
		n=n/10;
		k--;
	}
	printf("%d",n);
	}
	else
	printf("0");
	// your code goes here
	return 0;
}
