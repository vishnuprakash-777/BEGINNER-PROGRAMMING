//Write a program to copy the contents of one array into another in reverse order.
#include<stdio.h>
int main()
{
  int a[10000],i,n;
  char choice;
  do
  {
    printf("Enter the number of values:" );
    scanf("%d",&n);
    if(n<=10000 && n>=1)
    {
      printf("Enter the values:");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("The reverse of array is given below:\n");
      for(i=n-1;i>=0;i--)
      {
        printf("%d ",a[i]);
      }
      printf("\n\n");
    }
    else
    {
      printf("Invalid choice\n\n");
    }
    getchar();
    printf("Do you want to continue(y/n):");
    choice=getchar();
  }while(choice=='y');
  printf("Bye!!\n\n");
}
