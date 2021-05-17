//Write a program to print all ASCII values and their equivalent characters using a while loop.
#include<stdio.h>
#include<string.h>
int main()
{
  int i=0;
  while(i<=225)
  {
    printf("ASCII value %c is %d\n",i,i);
    i++;
  }
}
