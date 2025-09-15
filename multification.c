#include<stdio.h>
int main(){
	int i,n;
	printf("multiplication table of 5:\n");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("5*%d=%d\n",i,i*5);
	}
}