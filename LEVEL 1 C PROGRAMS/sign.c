#include<stdio.h>
void main()
{
  float a;
  printf("enter a number: ");
  scanf("%f",&a);
  if(a>=0)
  {
    if(a==0)
      {
        printf("it is 0\n");
      }
    else
      {
        printf("positive number\n");
      }
  }
  else
  {
    printf("negative number\n");
  }

}
