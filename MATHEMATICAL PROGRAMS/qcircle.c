//Given the coordinates (x,y) of the centre of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle.
#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,r,a,b,dist;
  printf("Enter centre coordinates of circle:");
  scanf("%f%f",&x,&y);
  printf("Enter the radius:");
  scanf("%f",&r);
  printf("Enter the points:");
  scanf("%f%f",&a,&b);
  dist=sqrt(pow(a-x,2)+pow(b-y,2));
  if(dist==r)
  {
    printf("The point lies on the circle\n");
  }
  else if(r>dist)
  {
    printf("The point lies inside the circle\n");
  }
  else
  {
    printf("The point lies outside the circle\n");
  }
}
