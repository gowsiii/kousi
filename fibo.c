#include <stdio.h>

int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	return fib(n-2)+fib(n-1);
}
int main(void) {
	int n,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	printf("%d\t",fib(i));
}
	// your code goes here
	return 0;
}
