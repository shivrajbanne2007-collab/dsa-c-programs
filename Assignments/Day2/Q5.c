// Q5 nth term of febonacci series using recursion

#include <stdio.h>

int series(int a, int b, int c, int n)
{
    if (c == n)
    {
        printf("the nth term is %d", a);

    }

    int x = a + b;
    series(b, x, c + 1, n);
}

int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    series(0, 1, 0, n);
    return 0;
}