#include <stdio.h>

int main(void) {
	int n,rem,ans=1;
scanf("%d",&n);
int m=n;
while(n!=0)
{
	rem=n%10;
	n=n/10;
	ans=ans*rem;
	
}
printf("%d is a seed of %d",m,ans*m);
	// your code goes here
	return 0;
}
