//Program to check wheather the number is prime or not.
#include<stdio.h>
void main()
{
  int n,i=1,count=0;
  printf("Enter the number:");
  scanf("%d",&n);
  while(i<=n)
  {
    if(n%i==0)
    {
      count++;
    }
    i++;
  }
  if(count==2)
  {
    printf("It is a prime\n");
  }
  else
  {
    printf("It is not a prime\n");
  }
}
