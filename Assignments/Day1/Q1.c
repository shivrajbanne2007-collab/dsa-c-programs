// Q1 accept 2 numbers display division  and check divide by 
//     zero errror 


#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("enter the 2 numbers");
    scanf("%d %f",&a,&b);
    float divide;
    divide=a/b;
    printf("%0.2f \n",divide);
}