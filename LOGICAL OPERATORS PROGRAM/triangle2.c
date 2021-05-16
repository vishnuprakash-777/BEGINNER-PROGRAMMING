//If three sides of a triangle are entered through the keyboard, write a program to check whether the triangle isosceles, equilateral or right angled triangle.
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  printf("Enter the three sides of a triangle:");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c)
  {
    printf("The triangle is equilateral\n");
  }
  else if((a==b && c!=b) || (a==c && b!=c) || (b==c && a!=c))
  {
    printf("The triangle is isosceles\n");
  }
  else if((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(a,2)+pow(c,2)==pow(b,2)) || (pow(b,2)+pow(c,2)==pow(a,2)))
  {
    printf("The triangle is right angled triangle\n");
  }
  else
  {
    printf("It is not isosceles, equilateral or right angled triangle\n");
  }
}
