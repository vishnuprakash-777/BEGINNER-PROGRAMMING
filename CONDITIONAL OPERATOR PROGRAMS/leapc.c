//Write a program using conditional operator to determine whether a year entered through the keyboard is a leap year or not.
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the year:");
  scanf("%d",&n);
  (n%400==0 || (n%4==0 && n%100!=0))?printf("%d is a leap year\n",n):printf("%d is not a leap year\n",n);
}
