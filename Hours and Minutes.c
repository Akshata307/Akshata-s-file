//Given an integer minutes .Convert the given minutes into HOURS and MINUTES form.
#include<stdio.h>
int main()
{
int miutes;
scanf("%d",&miutes);
int hours=miutes/60;
int mins=minutes%60;
printf("%d hour(s) %d minutes(s)",hours,mins);
}
