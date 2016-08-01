#include <stdio.h>

int main(void) {
	int k,i,n,count=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>k)
		count++;
	}
	int b[n];
int	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
		b[j]=a[i];
		j++;
		}
		else
		{
			b[count]=a[i];
			count++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	// your code goes here
	return 0;
}
