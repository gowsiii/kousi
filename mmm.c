#include<stdio.h>
int main()
{
int n,i,flag=0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
flag=1;
}
if(flag==1)
printf("The given number is not prime");
else
printf("The given number is prime");
return 0;
}
