//If a five-digit positive integer is entered through the keyboard, write a program to calculate the sum of its digits. Display an error message if the number entered is not a valid five digit number.
#include<stdio.h>
void main()
{
  int n,n1,n2,p=0,d,s=0;
  printf("enter the number:");
  scanf("%d",&n);
  n1=n;
  n2=n;
  while(n>0)
  {
    n=n/10;
    p++;
  }
  if(p!=5)
  {
    printf("It is invalid\n");
  }
  else
  {
    while(n1>0)
    {
      d=n1%10;
      s=s+d;
      n1=n1/10;
    }
    printf("Sum of the digits of %d is %d\n",n2,s);
  }
}
