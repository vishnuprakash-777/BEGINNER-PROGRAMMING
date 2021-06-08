/*The X and Y coordinates of 10 different points are entered through the keyboard.
Write a program to find the distance of the last point from the first point (sum of the distances between consecutive points).*/
#include<stdio.h>
#include<math.h>
int main()
{
  int x[10],y[10],i;
  float d,total=0;
  printf("Enter the value of x and y:");
  for(i=0;i<10;i++)
  {
    scanf("%d%d",&x[i],&y[i]);
  }
  for(i=0;i<9;i++)
  {
    d=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
    total+=d;
  }
  printf("The distance from last point to first point is %f\n",total);
}
