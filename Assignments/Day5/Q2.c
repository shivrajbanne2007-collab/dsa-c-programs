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
        int even=0,odd=0;
    int *ptr=A;
    for(i=0;i<size;i++)
    {
        if(*(ptr+i)%2==0)
        {
            even++;
        }
        else{
            odd++;
        }

    }

  printf("The count of even and odd numbers is %d %d",even,odd);
}