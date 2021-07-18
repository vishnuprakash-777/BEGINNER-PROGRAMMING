//Checking a number is even or odd using command line argument
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int i;
  for(i=1;i<argc;i++)
  {
    if(atoi(argv[i])%2==0 && atoi(argv[i])!=0)
    {
      printf("%d is positive\n",atoi(argv[i]));
    }
    else if(atoi(argv[i])%2!=0)
    {
      printf("%d is negative\n",atoi(argv[i]));
    }
    else
    {
      printf("%d is zero\n",atoi(argv[i]));
    }
  }
}
