//Write a program to accept two numbers and place them in two variables a and b. Interchange their values and display the result.
#include<stdio.h>
void main()
{
  int a,b,acopy;
  printf("Enter the 2 numbers:");
  scanf("%d%d",&a,&b);
  acopy=a;
  a=b;
  b=acopy;
  printf("%d & %d\n",a,b);
}
