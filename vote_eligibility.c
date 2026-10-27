#include<stdio.h>
void main()
{
  int age;
  printf("\nEnter the age of person:");
  scanf("%d",&age);
  if(age>=18)
    printf("\nPerson is eligible to vote");
  else
    printf("\nPerson is not eligible to vote");
}