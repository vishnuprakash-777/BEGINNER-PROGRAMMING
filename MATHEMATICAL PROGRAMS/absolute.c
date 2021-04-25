//Write a program to find the absolute value of a number entered through the keyboard (Do not use math functions).
#include<stdio.h>
int main()
{
  float x;
  printf("Enter the number:");
  scanf("%f",&x);
  if(x>=0)
  {
    printf("The absolute value of %f is %f\n",x,x);
  }
  else
  {
    printf("The absolute value of %f is %f\n",x,-x);
  }
}
