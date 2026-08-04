// Q3 Prime numbers in given range

#include <stdio.h>

int prime(int a, int b)
{
    int i=a+1;

    for (i > a; i < b; i++)
    {

        if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0 || a == 1 || a == 2 || a == 3 || a == 5 || a == 7)

        {
            printf("%d \n", a);
        }

        if (a >= b) 
            break;
        a++;
    }
}

int main()
{
    int a, b;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the last number");
    
    scanf("%d", &b);
    prime(a, b);
}
