#include <stdio.h>

int main(void) {
	int rem=0,n,m,sum=0;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+(rem*rem*rem);
	}
	if(sum==m)
printf("The given number is amstrong number");
else
printf("The given number is not amstrong number");
	// your code goes here
	return 0;
}
