// Q1 to accept 5 subject marks and calculate average

#include<stdio.h>
int main()
{
    int marks[5];
    int i;
    printf("Enter the marks of subject");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }

    int avg=0;
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("The average of all 5 subjects is %d",avg);
}
