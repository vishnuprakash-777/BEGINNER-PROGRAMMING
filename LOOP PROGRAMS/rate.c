//Write a program to calculate overtime pay of 10 employees. Overtime is paid at a rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for a fractional part of an hour.
#include<stdio.h>
int main()
{
  int count,w,o;
  for(count=1;count<=10;count++)
  {
    printf("Enter the woring hours of the employee no %d:",count);
    scanf("%d",&w);
    if(w>40)
    {
      o=w-40;
      printf("Overtime pay of the employee no %d is %d Rs\n",count,o*12);
    }
    else
    {
      printf("No extra payment for working hours less than 40\n");
    }
  }
}
