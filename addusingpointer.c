#include <stdio.h>

int main(void) {
int i,j,*p,*q;
p=&i,q=&j;
scanf("%d%d",&i,&j);
printf("%d",(*p)+(*q));
	// your code goes here
	return 0;
}
