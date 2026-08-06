// Q3Write a function to find mode of the array. (Mode is the value which occurs most frequently in a set of
 // values)

#include<stdio.h>

int mode(int A[],int size)
{
    int i,j,x=0,y;
    int count;
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(A[i]==A[j])
            {
                count++;
            }
        }

        if(count>x)
        {
            x=count;
            y=A[i];
        }

    }
    printf("The mode number is %d",y);
}




int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int A[size];
    int i,j;
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    mode(A,size);
}

