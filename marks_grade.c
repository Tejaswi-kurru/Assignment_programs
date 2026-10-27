#include<stdio.h>
void main()
{
  int m;
  printf("\nEnter the marks of student:");
  scanf("%d",&m);
  if(m>=90&&m<=100)
    printf("\nGrade:'O'");
  else if(m>=80&&m<=89)
    printf("\nGrade:'A+'");
  else if(m>=70&&m<=79)
    printf("\nGrade:'A'");
  else if(m>=60&&m<=69)
    printf("\nGrade:'B'");
  else if(m>=50&&m<=59)
    printf("\nGrade:'C'");
  else if(m>=0&&m<50)
    printf("\nStudent is failed");
  else
    printf("\nInvalid input");
}