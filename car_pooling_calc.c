#include<stdio.h>

int main()
{
    float miles_perday,cost_per_gallon,avg_miles,parking_fees,tolls_perday,fuel_used,fuel_cost,total_cost,cost_per_person;
    printf("Enter total miles driven per day : ");
    scanf("%f",&miles_perday);
    printf("Enter cost per gallon of gasoline : ");
    scanf("%f",&cost_per_gallon);
    printf("Enter average miles driven per gallon : ");
    scanf("%f",&avg_miles);
    printf("Enter parking fees per day : ");
    scanf("%f",&parking_fees);
    printf("Enter tolls per day : ");
    scanf("%f",&tolls_perday);

    int passengers;
    printf("Enter number of passengers sharing the ride (including you) : ");
    scanf("%d",&passengers);

    fuel_used=miles_perday/avg_miles;
    fuel_cost= fuel_used*cost_per_gallon;
    total_cost=fuel_cost+parking_fees+tolls_perday;

    if (passengers>0)
    {
        cost_per_person=total_cost/passengers;
        printf("Your daily driving cost when you drive alone is : %.2f\n",total_cost);
        printf("When you drive with %d passengers, the daily driving cost is : %.2f\n",passengers,cost_per_person);
        printf("The money you saved through carpooling is : %.2f\n",total_cost-cost_per_person);
    }
    else
    {
        printf("Invalid numbers of passengers");
    }
    

    return 0;
}
