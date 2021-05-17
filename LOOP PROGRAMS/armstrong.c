//Write a program to print out all armstrong numbers between 1 and 500.
#include<stdio.h>
#include<math.h>
int main()
{
  int n,ncopy,l,d,sum,n1,n2,n3;
  for(n=1;n<=500;n++)
  {
    sum=0;
    n1=n;
    n2=n;
    n3=n;
    l=0;
    while(n1>0)
    {
      n1=n1/10;
      l++;
    }
    while(n2>0)
    {
      d=n2%10;
      sum=sum+pow(d,l);
      n2=n2/10;
    }
    if(sum==n3)
    {
      printf("%d is an armstrong number\n",n3);
    }
  }
}
