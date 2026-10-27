#include<stdio.h>
void main()
{
  float weight,height,bmi;
  printf("\nEnter weight of person in kg:");
  scanf("%f",&weight);
  printf("\nEnter height of person in meters:");
  scanf("\n",&height);
  bmi=weight/(height*height);
  printf("\nYour BMI is:%.3f",bmi);
  if(bmi<18.5)
    printf("\nCategory:Underweight");
  else if(bmi>=18.5&&bmi<25)
    printf("\nCategory:Normal");
  else if(bmi>=25&&bmi<30)
    printf("\nCategory:Overweight");
  else if(bmi>=30)
    printf("\nCategory:Obese");
  else
    printf("\nInvalid input");
}    