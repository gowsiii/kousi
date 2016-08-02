#include <stdio.h>

int main(void) {
	int n,i=1,rem[10],count=0,rem1[10];
	scanf("%d",&n);
	while(n!=0)
	{
		rem[i]=n%10;
		n=n/10;
		count++;
			i++;
	}
int	count1=count;
	for(i=1;i<=count;i++)
	{
			rem1[i]=rem[count1--];
	}
	int sum=0;
	for(i=1;i<=count;i=i+2)
	{
		sum=sum+rem1[i];
	}
		if(sum%2==0)
	printf("-1");
	else
	printf("1");
	// your code goes here
	return 0;
}
