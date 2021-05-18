//Using the Conditional operator, write a program to determine the largest among three numbers.
#include<stdio.h>
int main()
{
  float a,b,c,x;
  printf("Enter the three numbers:");
  scanf("%f%f%f",&a,&b,&c);
  x=(a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("The largest number among three numbers is %f\n",x);
}
