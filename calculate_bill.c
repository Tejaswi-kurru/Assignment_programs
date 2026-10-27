#include<stdio.h>
void main()
{
  float order_amount,delivery_charge,discount;
  int membership_type;
  printf("\nEnter the order amount:");
  scanf("%f",&order_amount);
  printf("\nEnter membership type(1 for premium,0 for regular):");
  scanf("%d",&membership_type);
  if(order_amount>=500)
  {
    delivery_charge=0.0;
    if(membership_type==1)
    {
      discount=0.10*order_amount;
    }
    else
      discount=0.0;
  }
  else
  {
    delivery_charge=50.0;
    discount=0.0;
  }
  printf("\nBill details:");
  printf("\nTotal order amount:%f",order_amount);
  printf("\nDiscount:%f",discount);
  printf("\nDelivery charges:%f",delivery_charge);
  printf("\nFinal payable amount:%f",(order_amount-discount+delivery_charge));
}  