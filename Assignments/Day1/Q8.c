// Q8 factorial of a number




#include<stdio.h>
int main()
{
 int i;
    int num;
  

    printf("enter an number");
    scanf("%d",&num);

    for(i=num-1;i>0;i--)
    {
        num=num*i;
    }
    
    printf("the factorial is %d",num);
}
 