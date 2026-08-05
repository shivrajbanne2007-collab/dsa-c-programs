// Q2 error flag

#include<stdio.h>

int errorFlag=0;

float func(float a,float b,float *sum,float *sub,float *div,float *mul)
{
      *sum=a+b;
      *sub=a-b;
      *mul=a*b;

      if(b==0)
      {
         errorFlag = 1;   // Set error flag
                // return 0;

      }
      else
      return *div=a/b;

}

int main()
{
    float a,b,sum,sub,mul,div;
    printf("enter the numbers");
    scanf("%f %f",&a,&b);
    float res=func(a,b,&sum,&sub,&mul,&div);
    printf("the result is %0.2f %0.2f  %0.2f \n",sum,sub,mul);

  if(errorFlag)
        printf("Error: Division by zero!\n");
    else
        printf("Result = %.2f\n", div);

}
