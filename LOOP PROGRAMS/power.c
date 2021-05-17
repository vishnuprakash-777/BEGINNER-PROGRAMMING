//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of the other.
#include<stdio.h>
int main()
{
  int a,b,i,acopy,bcopy,x=1;
  printf("Enter the base:");
  scanf("%d",&a);
  printf("Enter the exponent:");
  scanf("%d",&b);
  if(b==0)
  {
    printf("%d ^ %d =1\n",a,b);
  }
  else if(b>0)
  {
    for(i=1;i<=b;i++)
    {
      x*=a;
    }
    printf("%d ^ %d =%d\n",a,b,x);
  }
  else
  {
    for(i=1;i<=(-b);i++)
    {
      x*=a;
    }
    printf("%d ^ %d =1/%d\n",a,b,x);
  }
}
