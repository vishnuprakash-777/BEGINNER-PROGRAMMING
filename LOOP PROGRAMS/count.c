//Write a program to enter numbers till the user wants. At the end, it should display the count of positive, negative and zeros entered.
#include<stdio.h>
int main()
{
  int a,p=0,n=0,z=0;
  char choice;
  do
  {
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
      p++;
    }
    else if(a==0)
    {
      z++;
    }
    else
    {
      n++;
    }
    getchar();
    printf("Do you want to continue:(y/n)?");
    choice=getchar();
  }while(choice=='y');
  printf("Number of positive numbers = %d\n",p);
  printf("Number of negative numbers = %d\n",n);
  printf("Number of zeros = %d\n",z);
}
