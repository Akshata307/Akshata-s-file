// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,i,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("factorial is not defined for negative no.\n");
    }
    else
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %d=%d\n",n,fact);
}
