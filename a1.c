#include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if((a[i]+a[j])==0)
			{
			printf("%d\t%d\n",a[i],a[j]);	
			}
			
		}
	}
	// your code goes here
	return 0;
}
