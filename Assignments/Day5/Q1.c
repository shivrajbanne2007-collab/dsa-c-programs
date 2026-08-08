#include<stdio.h>
int main()
{
    int size;
    printf("enter size of array");
    scanf("%d",&size);
    int A[size];
    int i;
    printf("enter the array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }

   int num;
   printf("enter number to find");
    scanf("%d",&num);
    int *ptr=A;
    for(i=0;i<size;i++)
    {
        if(*(ptr+i)==num)
        {
            printf("The number is found at position %d",i);
        }
          
    }
 printf("Number is not found");
}