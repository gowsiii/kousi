#include <stdio.h>
int right_rotate(int a[],int k,int n)
{
	int i;
	for(i=0;i<k;i++)
	right_rotate_by_one(a,n);
}
int right_rotate_by_one(int a[],int n)
{
	int temp,i;
	temp=a[n-1];
	for(i=n-1;i>0;i--)
	
		a[i]=a[i-1];
		a[i]=temp;
	
}
printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
int main(void) {
int n,a[10],i,k;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
right_rotate(a,k,n);
printarray(a,n);
	return 0;
}
