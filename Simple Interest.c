#include <stdio.h>
int main(){
    int principal, time, rate, SI;
    printf("Enter the value of principal.\n");
    scanf("%d", &principal);
    printf("Enter the value of time.\n");
    scanf("%d", &time);
    printf("Enter the value of rate.\n");
    scanf("%d", &rate);
    SI = (principal * time * rate/100);
    printf("The simple interest is %d.",SI);
    return(0);
}
