#include<stdio.h>

int main()
{
  float highest_rainfall,current_rainfall;
  printf("Enter the highest rainfall (in mm) ever in one season : \n");
  scanf("%f",&highest_rainfall);
  printf("Enter the rainfall (in mm) in current year : \n");
  scanf("%f",&current_rainfall);

  // checking if the current rainfall exceed the highest rainfall

  if(current_rainfall>highest_rainfall)

  {
    printf("The rainfall in current season is highest\n");
    highest_rainfall=current_rainfall;
    printf("The highest rainfall (in mm) is now : %.2f\n",highest_rainfall);
  }

  return 0;

}