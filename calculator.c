#include<stdio.h>
void main()
{
  int a;
  float x,y,z;
  do
  {
    printf("\n\nCALCULATOR\n");
    printf("*************\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.EXIT\n\n\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    if(a>=1 && a<=4)
    {
      printf("Enter the two numbers:");
      scanf("%f%f",&x,&y);
    }
    switch(a)
    {
      case 1:
        z=x+y;
        printf("%f + %f = %f\n",x,y,z);
        break;
      case 2:
        z=x-y;
        printf("%f - %f = %f\n",x,y,z);
        break;
      case 3:
        z=x*y;
        printf("%f X %f = %f\n",x,y,z);
        break;
      case 4:
        z=x/y;
        printf("%f ÷ %f = %f\n",x,y,z);
        break;
      case 5:
        printf("Thank you..GOOD BYE\n");
        break;
      default:
        printf("Invalid choice\n\n");
    }
  }while(a!=5);
  printf("\n\n\n\n");
}
