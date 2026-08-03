// Q7 accept number and see it is sum of digits and amstrong or not


#include<stdio.h>
int main()
{
    int num;
    int remainder=0,x=0,reverse=0;
      printf("enter an number");
      scanf("%d",&num);
      while(num!=0)
      {
           remainder=num%10;
           num=num/10;
           reverse=reverse*10+remainder;
           x=x+remainder;

      }
      printf("the addition of integers is %d \n",x);
      printf("the reverse integer is %d \n",reverse);
} 