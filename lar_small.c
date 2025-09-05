#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first integer : ");
    scanf("%d",&a);
    printf("Enter second integer : ");
    scanf("%d",&b);
    printf("Enter third integer : ");
    scanf("%d",&c);

    // for smallest integer
    if (a<b && a<c)
    {
        printf("Smallest integer : %d\n",a);
    }
    else if (b<a && b<c)
    {
        printf("Smallest integer : %d\n",b);
    }
    else if (c<a && c<b)
    {
        printf("Smallest integer : %d\n",c);
    }

    // for largest integer
    if (a>b && a>c)
    {
        printf("Largest integer : %d\n",a);
    }
    else if (b>a && b>c)
    {
        printf("Largest integer : %d\n",b);
    }
    else if (c>a && c>b)
    {
        printf("Largest integer : %d\n",c);
    }

    return 0;
}
