//Write a program to find the factorial of a number
#include<stdio.h>
int main()
{
  int i,n,total=1,ncopy;
  printf("Enter the number:");
  scanf("%d",&n);
  ncopy=n;
  for(i=1;i<=n;i++)
  {
    total*=i;
  }
  printf("Factorial of %d is %d\n",ncopy,total);
}
