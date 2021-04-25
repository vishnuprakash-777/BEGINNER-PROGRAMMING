//Given a point (x,y), write a program to find out if it lies on the X-axis, Y-axis or on the origin.
#include<stdio.h>
int main()
{
  float x,y;
  printf("Enter the point:");
  scanf("%f%f",&x,&y);
  if(x==0 && y==0)
  {
    printf("It lies on origin\n");
  }
  else if(x==0 && y!=0)
  {
    printf("It lies on y-axis\n");
  }
  else if(y==0 && x!=0)
  {
    printf("It lies on x-axis\n");
  }
  else
  {
    printf("It do not lies on x-axis,y-axis or origin\n");
  }
}
