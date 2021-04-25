//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include<stdio.h>
int main()
{
  float l,b,area,perimeter;
  printf("Enter the length:");
  scanf("%f",&l);
  printf("Enter the breadth:");
  scanf("%f",&b);
  area=l*b;
  perimeter=2*(l+b);
  if(area>perimeter)
  {
    printf("The area %f is greater than perimeter %f of a rectangle\n",area,perimeter);
  }
  else
  {
    printf("The area %f is not greater than perimeter %f of a rectangle\n",area,perimeter);
  }

}
