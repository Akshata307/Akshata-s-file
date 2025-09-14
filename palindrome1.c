#include<stdio.h>
int main(){
	int n,reverse=0;
	scanf("%d",&n);
	while(n!=0)
	{
		int d=n%10;
		reverse=reverse*10+d;
		n=n/10;
	}
	if(n==reverse)
	printf("palindrome");
	else if(n<0)printf("invalid");
	else printf("not palindrome");
}