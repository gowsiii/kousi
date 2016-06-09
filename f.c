#include <stdio.h>
#include<string.h>

int main(void) {
char s[100],b[100];
int i,j=0,n;
scanf("%s",s);
n=strlen(s);
for(i=n-1;i>=0;i--)
{
b[j]=s[i];
j++;
}
for(j=0;j<n;j++)
{
if(!(b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u' || b[j]=='A' || b[j]=='E' || b[j]=='I' || b[j]=='O' || b[j]=='U'))
printf("%c",b[j]);
}
	// your code goes here
	return 0;
}
