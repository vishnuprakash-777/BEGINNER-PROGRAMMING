//If a five-digit positive integer is entered through the keyboard, write a program to reverse the number. Display an error message if the number entered is not a valid five digit number.
#include<stdio.h>
void main()
{
  int n,n1,n2,rev=0,r,p=0;
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
      r=n1%10;
      rev=rev*10+r;
      n1=n1/10;
    }
    printf("The reverse of the %d is %d\n",n2,rev);
  }
}
