//Checking a number is prime or not using command line argument
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int i=1,count=0;
  while(i<=atoi(argv[1]))
  {
    if(atoi(argv[1])%i==0)
    {
      count++;
    }
    i++;
  }
  if(count==2)
  {
    printf("%d is a prime\n",atoi(argv[1]));
  }
  else
  {
    printf("%d is not a prime\n",atoi(argv[1]));
  }
}
