/*Write a program to add the first seven terms of the following series using for loop.

1/1!+ 2/2!+3/3!+ ...*/
#include<stdio.h>
int main()
{
  float i,total=1,sum=0;
  for(i=1;i<=7;i++)
  {
    total*=i;
    sum=sum+(i/total);
  }
  printf("Total sum of first seven terms of 1/1!+ 2/2!+3/3!+ ... is %f.\n",sum);
}
