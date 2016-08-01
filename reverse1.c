#include <stdio.h>

int main(void) {
char str[100],s[100];
int i,j;
scanf("%s",str);
printf("%s",str);
int n=strlen(str);
j=0;
for(i=n-1;i>=0;i--)
{
	s[j]=str[i];
	j++;
}
printf("\n");
for(j=0;j<n;j++)
{
if(!(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
   printf("%c",s[j]);
}

	// your code goes here
	return 0;
}
