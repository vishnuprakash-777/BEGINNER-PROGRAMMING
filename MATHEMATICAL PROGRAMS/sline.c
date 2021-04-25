//Given three points (x1,y1), (x2,y2) and (x3,y3), write a program to check if all the three points fall on one straight line.
#include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,area;
  printf("Enter the first point:");
  scanf("%d%d",&x1,&y1);
  printf("Enter the second point:");
  scanf("%d%d",&x2,&y2);
  printf("Enter the third point:");
  scanf("%d%d",&x3,&y3);
  area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  if(area==0)
  {
    printf("All the three points fall on one straight line\n");
  }
  else
  {
    printf("All the three points do not fall on one straight line\n");
  }
}
