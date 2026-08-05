// 4. Write a function to perform division of two numbers. Return result via out parameter and return value
// indicates the error (due to zero denominator).

#include <stdio.h>

int divide(int a, int b, float *result)
{
    if (b == 0)
    {
        return -1;
    }

    *result = (float)a / b;
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the two numbers");
    scanf("%d %d", &a, &b);
    float res;
    int x = divide(a, b, &res);

    if (x == 0)
    {
        printf("Result = %.2f\n", res);
    }
    else
    {
        printf("Error: Division by zero\n");
    }

    return 0;
}
 