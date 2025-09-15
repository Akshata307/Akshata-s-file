#include<stdio.h>
int main(){
	int n,even_sum=0,odd_sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		even_sum+=i;
			else
		odd_sum+=i;
	}
	printf("even_sum=%d and odd_sum=%d",even_sum,odd_sum);
	return 0;
}