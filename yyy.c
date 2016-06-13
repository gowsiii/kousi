#include <stdio.h>

int main(void) {
	int n,i,r=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		r=r^a[i];
	}
	printf("%d",r);
	// your code goes here
	return 0;
}
