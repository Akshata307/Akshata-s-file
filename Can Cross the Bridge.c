//A mango weighs X kilograms and a truck weighs Y kilograms. A truck can cross the bridge safely with the weight of Z kilograms.
Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.
It is guaranteed that X <= Y <= Z
  
#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int max_mangoes=(c-b)/a;
printf("%d",max_mangoes);
}
