#include<stdio.h>

void main(){
    int year;
    printf("Please enter a year:");
    scanf("%d",&year);
    if((year%400==0)||(year%100!=0)&&(year%4==0))
        printf("%d is a leap year.",year);
    else
        printf("%d is not a leap year.",year);
}
