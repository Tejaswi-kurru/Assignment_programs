#include<stdio.h>
void main()
{
  int userid=101;
  int password=4321;
  int input_userid,input_password;
  printf("\nEnter the user id:");
  scanf("%d",&input_userid);
  printf("\nEnter the password:");
  scanf("%d",&input_password);
  if(userid==input_userid)
  {
   if(password==input_password)
     printf("\nLogin successfull");
   else
     printf("\nIncorrect password");
  }
  else
    printf("\nUser not found");
}   