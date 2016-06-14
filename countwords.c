#include <stdio.h>
#include<string.h>
int main(void) {
	int count=1,i;
char a[100];
gets(a);
for(i=0;i<strlen(a)+1;i++)
{
if(a[i]==' ')
count++;
}
printf("%d words in this line",count);

	// your code goes here
	return 0;
}
