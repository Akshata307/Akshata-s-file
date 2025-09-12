#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&n);
    num=n;
    int sum=0;
    while(n>0)
    {
        int last=n%10;
        sum=sum+(last*last*last);
        n=n/10;
    }
    if(num==sum){
    printf("armstorng");
    }
    else
    {
        printf("no");
    }
    return 0;
    }
