//Write a program to find the cube root of an integer. If the input is not a perfect cube, display the number is not a perfect cube.
#include<stdio.h>
#include<math.h>
void main()
{
  int n;
  float x,y;
  printf("Enter the number:");
  scanf("%d",&n);
  x=cbrt(n);
  y=(int)x;
  if(x==y)
    printf("The number is perfect cube and cube root is %f\n",x);
  else
    printf("The number is not perfect cube\n");
}
