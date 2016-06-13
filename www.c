#include <stdio.h>

int main(void) {
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d\n",i,m,i*m);
	}
	// your code goes here
	return 0;
}
