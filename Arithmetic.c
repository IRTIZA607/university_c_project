/*(Arithmetic) Write a program that asks the user to enter two numbers, obtains them
from the user and prints their sum, product, difference, quotient and remainder.*/

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf(" %d", &num1);
    printf("Enter second number : ");
    scanf(" %d", &num2);

    // for sum
    printf("The sum of %d and %d is : %d\n",num1,num2,num1+num2);

    // for prodcut
    printf("The product of %d and %d is : %d\n",num1,num2,num1*num2);

    // for difference
    printf("The difference of %d and %d is : %d\n",num1,num2,num1-num2);

    // for quotient and remainder
    if (num1==0 && num2==0)
    {
       printf("Undefined");
    }   
    else if (num2==0)
    {
        printf("Invalid input");
    }
    else
    {
       printf("The remainder of %d and %d is : %d\n",num1,num2,num1%num2);
       printf("The quotient of %d and %d is : %d\n",num1,num2,num1/num2);
    }
    
    return 0;
}
