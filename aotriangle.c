//If the lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,s,z,area;
  printf("enter the sides of triangle:");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  z=s*(s-a)*(s-b)*(s-c);
  if(z>=0)
  {
    area=sqrt(z);
    printf("The area of triangle is %f\n",area);
  }
  else
  {
    printf("Triangle not possible\n");
  }
}
