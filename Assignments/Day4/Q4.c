// 4. Write a function to reverse an array.


#include<stdio.h>

int rev(int A[],int size)
{
    int i,j,x;
    for(i=0,j=size-1;i<j;i++,j--)
    {
        x=A[i];
        A[i]=A[j];
        A[j]=x;
    }
    for(i=0;i<size;i++)         
    {
        printf("%d",A[i]);
    }
}

int main()
{
    int i,j,size;
    printf("Ente the size of array \n");
    scanf("%d",&size);
    int A[size];
    printf("Enter the array elements \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }

    rev(A,size);
}