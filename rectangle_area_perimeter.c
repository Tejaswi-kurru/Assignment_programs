#include<stdio.h>
void main()
{
  float length,width,area,perimeter;
  printf("\nEnter length,width of rectangle:");
  scanf("%f %f",&length,&width);
  printf("\nArea of rectangle:%f",length*width);
  printf("\nPerimeter of rectangle:%f",2*(length+width));
}  