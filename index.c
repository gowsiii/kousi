#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==a[i])
		{
			printf("Index %d is equal to the array element %d\n",i,a[i]);
		}
		
	}
	
	// your code goes here
	return 0;
}
