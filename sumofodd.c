#include <stdio.h>

int main(void) {
	int n,i;
	int sum=0,sum1=0;
	for(i=1;i<=15;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
	for(i=15;i<=45;i=i+2)
	{
		sum1=sum1+i;
	}
	printf("%d",sum1);
	// your code goes here
	return 0;
}
