#include<stdio.h>
int main()
{
int n,reminder,no_of_digits=0;
scanf("%d",&n);
while(n!=0)
{
reminder=n%10;
n=n/10;
no_of_digits++;
}
printf("%d",no_of_digits);
return 0;
}
