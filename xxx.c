#include <stdio.h>

int main(void) {
	int i,n,j,temp;
	scanf("%d",&n);
	int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
	for(j=i;j<=n-1;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(j=0;j<n;j++)
{
if(a[j]==j)
printf("The value of a[%d] is equal to the index %d",j,a[j]);

}
	// your code goes here
	return 0;
}
