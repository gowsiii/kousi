 #include <stdio.h>

int main(void) {
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	while(n1!=n2)
	{
		if(n1>=n2-1)
		n1=n1-n2;
		else
		n2=n2-n1;
	}
	printf("GCD of given number is :%d",n1);
	// your code goes here
	return 0;
}
