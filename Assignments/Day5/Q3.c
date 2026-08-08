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

int sum=0;
int *ptr=A;
for(i=0;i<size;i++)
{
    sum=sum+*(ptr+i);
}
printf("The sum is %d",sum);
}