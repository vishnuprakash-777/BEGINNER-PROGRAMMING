//Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
#include<stdio.h>
#include<limits.h>
int main()
{
  int min=INT_MIN,max=INT_MAX,n;
  char choice;
  do
  {
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<max)
    {
      max=n;
    }
    if(n>min)
    {
      min=n;
    }
    getchar();
    printf("Do you want to continue:(y/n)?");
    choice=getchar();
  }while(choice=='y');
  printf("Difference between the biggest number %d and smallest number %d is %d\n",min,max,min-max);
}
