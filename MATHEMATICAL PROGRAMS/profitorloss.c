//If the cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter the cost price:");
  scanf("%f",&a);
  printf("Enter the selling price:");
  scanf("%f",&b);
  if(b-a>0)
  {
    printf("Seller had made a profit of %f\n",b-a);
  }
  else if(b-a==0)
  {
    printf("Seller has not made any profit or loss\n");
  }
  else
  {
    printf("Seller has made a loss of %f\n ",a-b);
  }

}
