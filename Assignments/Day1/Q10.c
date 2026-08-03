
// Q10 fibonacci series


#include<stdio.h>
int main()
{
    int i;
    int n;
    int x=0,a=0,b=1;
    printf(" value of n \n");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
          x=a+b;
          a=b;
          b=x;  
    }
    printf("\n The nth term is %d",a);
}