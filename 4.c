//RMcoder09
#include<stdio.h>
int main()                               //program4
{
    int y;
    printf("Enter year\n");
    scanf(" %d",&y);
    if(y%400==0)
        printf("Leap year");
    else if((y%100!=0)&&(y%4==0))
        printf("Leap year");
    else
        printf("Not a leap year");
}
