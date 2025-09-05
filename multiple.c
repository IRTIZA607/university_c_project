#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    if (num1%num2==0)
    {
        printf("%d and %d are multiples of each other", num1,num2);
    }
    else if (num2%num1==0)
    {
        printf("%d and %d are multiples of each other", num2,num1);
    }
    else
    {
       printf("The numbers are not multiple of each other");
    }
    return 0;
}
