#include<stdio.h>
#include<math.h>
 
int main() {
    int num;
     
    printf("Enter an integer\n");
    scanf("%d", &num);
     
    if(num && ((num & (num-1)) == 0)){
        printf("%d is power of 2", num);
    } else {
        printf("%d is not a power of 2", num);
    }
 
    return 0;
}
