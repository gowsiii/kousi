#include<stdio.h>
int main()
{
int n,m,i,j,flag;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0 && i!=1)
printf("%d\t",i);
}
return 0;
}
