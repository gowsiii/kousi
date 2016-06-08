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
if(reverse==m)
printf("The given number is palindrome");
else
printf("The given number is not palindrome");
return 0;
}
