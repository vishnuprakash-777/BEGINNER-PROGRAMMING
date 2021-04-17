//Consider a currency system in by which there are notes of seven denominations, namely Re 1., Rs. 2, Rs. 5, Rs. 10, Rs. 50 and Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
#include<stdio.h>
void main()
{
  int n,x,y;
  printf("Enter the number:");
  scanf("%d",&n);
  x=n/100;
  n=n-(x*100);
  printf("%d X 100 = %d\n",x,(x*100));
  x=n/50;
  n=n-(x*50);
  printf("%d X 50 = %d\n",x,(x*50));
  x=n/20;
  n=n-(x*20);
  printf("%d X 20 = %d\n",x,(x*20));
  x=n/10;
  n=n-(x*10);
  printf("%d X 10 = %d\n",x,(x*10));
  x=n/5;
  n=n-(x*5);
  printf("%d X 5 = %d\n",x,(x*5));
  x=n/2;
  n=n-(x*2);
  printf("%d X 2 = %d\n",x,(x*2));
  x=n/1;
  n=n-(x*1);
  printf("%d X 1 = %d\n",x,(x*1));
}
