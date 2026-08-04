// Q4 Converting number into binary

#include <stdio.h>

int binary(int n)
{
    int x;
    if (n < 1)
    {
        return 1; // Exits  the function immediately
    }

    x = n / 2;
    binary(x);
    x = n % 2;
     printf("%d", x);
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    binary(n);
}

