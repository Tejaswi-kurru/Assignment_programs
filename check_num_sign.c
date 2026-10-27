#include<stdio.h>
void main()
{
  float num;
  printf("\nEnter the number:");
  scanf("%f",&num);
  if(num>0)
    printf("\nNumber is positive");
  else
  {
    if(num<0)
       printf("\nNumber is negative");
    else
       printf("\nNumber is zero");
  }  
}  