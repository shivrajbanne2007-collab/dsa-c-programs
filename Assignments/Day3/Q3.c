// Q3 Add and product function

#include<stdio.h>

int sp(int a,int b,int *sum,int *product)
{
    *sum=a+b;
    *product=a*b;

}
int main()
{
    int a,b,sum,product;
    printf("Enter The 2 numbers");
    scanf("%d %d",&a,&b);
    int res=sp(a,b,&sum,&product);
    printf("The Sum And Product Are %d %d",sum,product);

}
