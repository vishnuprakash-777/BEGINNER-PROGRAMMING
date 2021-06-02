/*Write a menu driven program which has the following options
A.Factorial of a number
B.Prime or Not
C.Odd or even
D.Exit
	One a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the “Exit” option, the program should continue to run
*/
#include<stdio.h>
int main()
{
  char a;
  int n,total=1,i,count=0;
  do
  {
    printf("\n\nMENU\n");
    printf("*************\n");
    printf("A.FACTORIAL OF A NUMBER\n");
    printf("B.PRIME OR NOT\n");
    printf("C.ODD OR EVEN\n");
    printf("D.EXIT\n\n\n");
    printf("Enter your choice:");
    a=getchar();
    if(a=='A' || a=='B' || a=='C')
    {
      printf("Enter the number:");
      scanf("%d",&n);
    }
    getchar();
    switch(a)
    {
      case 'A':
        for(i=1;i<=n;i++)
        {
          total*=i;
        }
        printf("The Factorial of %d is %d\n",n,total);
        break;
      case 'B':
        for(i=1;i<=n;i++)
        {
          if(n%i==0)
          {
            count++;
          }
        }
        if(count==2)
        {
          printf("%d is a prime\n",n);
        }
        else
        {
          printf("%d is not a prime\n",n);
        }
        break;
      case 'C':
        if(n%2==0)
        {
          printf("%d is even\n",n);
        }
        else
        {
          printf("%d is odd\n",n);
        }
        break;
      case 'D':
        printf("EXIT\n");
        break;
      default:
        printf("Invalid choice\n\n");
        break;
    }
  }while(a!='D');
  printf("\n\n");
}
