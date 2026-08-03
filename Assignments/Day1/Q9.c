// Q9 base and indext


#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of base and index");
    scanf("%d %d",&a,&b);
    int i,r=1;

   for(i=1;i<=b;i++)
    {
       r=r*a;
    }
       printf("the value is %d",r);
}
