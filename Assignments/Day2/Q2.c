// Q2 To print fibonacci series

#include <stdio.h>

int series(int n)
{
      int i;

      int x = 0, a = 0, b = 1;

      for (i = 0; i < n; i++)
      {

            printf("%d ", a);
            x = a + b;
            a = b;
            b = x;
      }
}
int main()
{
      int n;
      printf("enter the total number of terms");
      scanf("%d", &n);
      series(n);
}
