#include <stdio.h>

int main(void) {
	int rem,n,m,sum=0,k=0,i;
	scanf("%d %d",&n,&m);

	for(i=n;i<=m;i++)
	{sum=0;
		k=i;
			while(k!=0)
	{
		rem=k%10;
		k=k/10;
		sum=sum+(rem*rem*rem);
	}
	if(sum==i)
	printf("%d\t",sum);
	

	}


	// your code goes here
	return 0;
}
