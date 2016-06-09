#include<stdio.h>
int main()
{
int n,m,i,j,flag,k=0;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{

for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
k++;
}

}
printf("%d",k);
return 0;
}
