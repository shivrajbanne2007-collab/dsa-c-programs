// Q2 Write two different functions to find maximum and minimum of the array elements.


#include<stdio.h>


int max(int A[],int size)
{
    int i,j,x;
    for(i=0;i<1;i++)
    {
        for(j=0;j<size;j++)
        {
            if(A[i]<A[j])
            {
                   x=A[i];
                  A[i]=A[j];
                  A[j]=x;
            }
        }
         printf(" \n The Maximun Number in the array is  %d ",A[i]);
    }
    
}

int min(int A[],int size)
{
      int i,j,x;
      for(i=0;i<1;i++)
    {
        for(j=0;j<size;j++)
        {
            if(A[i]>A[j])
            {
                   x=A[i];
                  A[i]=A[j];
                  A[j]=x;
            }
        }
         printf("\n The Minimum Number in the array is %d ",A[i]);
    }

}




int main()
{
    int i,size;
    printf("Ente the size of array \n");
    scanf("%d",&size);
    int A[size];
    printf("Enter the array elements \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }

    max(A,size);
    min(A,size);

}