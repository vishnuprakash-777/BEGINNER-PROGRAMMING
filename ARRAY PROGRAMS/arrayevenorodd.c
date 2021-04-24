#include<stdio.h>
int main()
{
  int a[100],n,i;
  do
  {
    printf("Enter the number of values:");
    scanf("%d",&n);
    if(n<=100 && n>=1)
    {
      printf("Enter the values:");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i] );
      }
      for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
        {
          printf("%d is even\n",a[i]);
        }
        else
        {
          printf("%d is odd\n",a[i]);
        }
      }
    }
    else if(n==0)
    {
      printf("Bye\n");
    }
    else
    {
      printf("Invalid Choice\n");
    }
  }while(n!=0);
  printf("\n\n");
}
