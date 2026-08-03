// Q6 write a program to print table of given number



#include<stdio.h>
int main()
{
    int i;
    int num;
    printf("enter an number");
    scanf("%d",&num);
    for(i=1;i<11;i++)
    {
          printf("\n %d",i*num);
    }
}
