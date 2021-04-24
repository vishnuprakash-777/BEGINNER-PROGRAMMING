//Write a program to accept n numbers and find the smallest and biggest among them
#include<stdio.h>
void main()
{
  int a[100],n,i,min,max;
  do
  {
    printf("Enter the number of values:");
    scanf("%d",&n);
    if(n<=100 && n>=1)
    {
      printf("Enter the values:");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      max=min=a[0];
      for(i=0;i<n;i++)
      {
        if(a[i]>max)
        {
          max=a[i];
        }
        if(a[i]<min)
        {
          min=a[i];
        }
      }
      printf("The largest value = %d \n",max);
      printf("The smalllest value = %d \n",min);
    }
    else if(n==0)
    {
      printf("bye\n");
    }
    else
    {
      printf("Invalid choice\n");
    }
  }while(n!=0);
  printf("\n\n");
}
