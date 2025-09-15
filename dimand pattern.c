#include<stdio.h>
int main(){
	int n=4;
	int stares=1,spaces=n-1;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=spaces;j++){
		printf(" ");
	}
	for(int j=1;j<=stars;j++)
	{
		printf("*");
	}
	stars=stars+2;
	spaces--;
	printf("\n");
}
stars=stars-4;
spaces=-1;
for(int i=1;i<=n;i++){
	for(int j=1;j<=spaces;j++){
		printf(" ");
	}
	for(int j=1;j<=stars;j++){
		printf(" *");
	}
	printf("\n");
	stars=stars-2;
	spaces++;
}
}