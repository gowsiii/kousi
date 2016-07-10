#include <stdio.h>

int main(void) {
	int k,n,rem[10],i,j,count=0,temp=0,h,rem1[10];
	scanf("%d%d",&n,&h);
	int m;
	m=n;
	if(n>0)
	{
	while(n!=0)
	{
		rem[i++]=n%10;
		n=n/10;
		count++;
	}
	for(j=0;j<count;j++)
	{
	
	for(k=0;k<count;k++)
	{
		if(rem[j]>rem[k])
		{
			temp=rem[j];
			rem[j]=rem[k];
			rem[k]=temp;
		}
	}
	
	}
	j=count-1;

	for(k=0;k<count;k++)
	{
	
		rem1[j--]=rem[k];
		
	}

	for(k=0;k<h;k++)
	printf("%d",rem1[k]);
	

	}
	else
	printf("0");
	// your code goes here
	return 0;
}
