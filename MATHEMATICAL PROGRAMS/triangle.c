//Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
#include<stdio.h>
int main()
{
  float a,b,c;
  printf("Enter the three angles of triangle in degrees:");
  scanf("%f%f%f",&a,&b,&c);
  if(a+b+c==180 && a>0 && b>0 && c>0)
  {
    printf("The triangle is valid\n");
  }
  else
  {
    printf("The triangle is not valid\n");
  }
}
