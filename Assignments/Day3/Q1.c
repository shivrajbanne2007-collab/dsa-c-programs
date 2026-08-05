// Q1 four function calculator using functions


#include <stdio.h>


int calculate(int a, int b, char operator)
 {


    if (operator == '+') {
        printf("The addition is %d",a+b);
    } 
    else if (operator == '-') {
        printf("The subtraction is %d",a-b);
    } 
    else if (operator == '*') {
      printf("The multiplication is %d",a*b);
    } 
    else if (operator == '/') {
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
        printf("The division is %d",a/b);
    } 
    
    }


int main() {
    
    int a,b;
    char operator;
    printf("Enter the 2 numbers");
    scanf("%d %d",&a,&b);
    printf("Enter the symbol of operation");
    scanf(" %c",&operator);
     calculate (a,b,operator);
    
}