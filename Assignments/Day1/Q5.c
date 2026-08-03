// Q5 function calculator


#include <stdio.h>
int main()
{
    float a,b;
    printf("enter 2 numbers");
    scanf("%f %f",&a,&b);

    printf("chose which operation do you want to perform \n");

    printf("1.Addition \n 2.substraction \n 3.multiplication \n 4.division \n");

    int i;
    printf("enter the number of option \n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("%f",a+b);
        break;

        case 2:
        printf("%f",a-b);
        break;

        case 3:
        printf("%f",a*b);
        break;

        case 4:
        printf("%f",a/b);
        break;

        default:
        printf("invalid");
    }

}
