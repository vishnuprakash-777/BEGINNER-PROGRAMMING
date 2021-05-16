//A year is entered through the keyboard. Write a program to determine whether the year is leap year or not. Use logical operators && and ||.
#include<stdio.h>
int main()
{
  int n,ncopy;
  printf("Enter the year:");
  scanf("%d",&n);
  if((n%400==0) || (n%4==0 && n%100!=0))
  {
    printf("%d is a leap year\n",n);
  }
  else
  {
    printf("%d is not a leap year\n",n);
  }
}
