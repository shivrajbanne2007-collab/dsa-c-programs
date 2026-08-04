// Q1 leap year and number of months

#include<stdio.h>
int leap(int year)
{
    if(year%4==0 || year%400==0)
    printf("the year is leap \n");
    else
    printf("the year is not leap");
}
int days(int month,int year)
{
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    printf("31 days are there");
    else if(month==2)
    {
        if(year%4==0 || year%400==0)
        printf("29 days are there");
        else
        printf("28 days are there");
     }
    else
    printf("30 days are there");

}

int main()
{
    int year;
    int month;

    printf("\n enter year");
    scanf("%d",&year);
    leap(year);
    printf("\n enter the month number");
    scanf("%d",&month);
    days(month,year);

}
