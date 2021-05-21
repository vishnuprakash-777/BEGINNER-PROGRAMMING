//Write a program to print all prime numbers from 1 to 300. (Use nested loops, break and continue)
#include<stdio.h>
int main()
{
  int i,flag,n=1;
  while(n<=300)
  {
    flag=0;
    if(n%2==0 && n!=2)
    {
      flag=0;
      n++;
      continue;
    }
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0 && n>=2)
    {
      printf("%d is a prime number\n",n);
    }
    n++;
  }
}
