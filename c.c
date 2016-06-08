#include<stdio.h>
#include<math.h>
int main()
{
int n,m,reverse=0,rem;
scanf("%d",&n);
m=n;
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
printf("%d",reverse);
return 0;
}
