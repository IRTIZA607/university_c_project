#include<stdio.h>

int main()
{
    float height,weight,BMI;
    printf("Enter height in inches : ");
    scanf("%f",&height);
    printf("Enter weight in pounds : ");
    scanf("%f",&weight);
    BMI=(weight*703)/(height*height);
    printf("The BMI of the person is :%.2f ", BMI);
    if (BMI<18.5)
    {
        printf("Underweight");
    }
    else if (BMI>18.5 && BMI<24.9)
    {
        printf("Normal");
    }
    else if (BMI>25 && BMI<29.9)
    {
        printf("Overweight");
    }
    else if (BMI>30)
    {
        printf("Obese");
    }
    

    return 0;
}
