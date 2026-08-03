// / Q4 accept 5 digit number and check it is palindrome

#include <stdio.h>
int main()
{
    int reverse=0,num,temp,remainder;
    printf("Enter the 5 digit number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        
        remainder=temp%10;
        reverse=reverse*10+remainder;
        temp=temp/10;
    }
    if(num==reverse)
    printf("the number is palindrome");
    else
    printf("the number is not a palindrome");
}