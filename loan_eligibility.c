#include<stdio.h>
void main()
{
    int age;
    float monthly_income,credit_score;
    printf("\nEnter the age of applicant:");
    scanf("%d",&age);
    printf("\nEnter monthly income of applicant:");
    scanf("%f",&monthly_income);
    printf("\nEnter credit score of applicant:");
    scanf("%f",&credit_score);
    if(age>=21&&age<=60)
    {
        if(monthly_income>=25000)
        {
            if(credit_score>=700)
                printf("\nLoan approved!");
            else
                printf("\nLoan rejected:credit score below 700");
        }
        else
            printf("\nLoan rejected:income below ₹25000/-");
    } 
    else
      printf("\nLoan rejected:age not in 21 to 60");
}             