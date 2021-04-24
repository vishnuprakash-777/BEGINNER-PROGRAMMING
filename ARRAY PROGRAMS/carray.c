//Write a program in C to copy the elements of one array into another array
#include<stdio.h>
int main()
{
  int a[100],b[100],i,n;
  printf("Enter the number of values:");
  scanf("%d",&n);
  if(n<=100 && n>=1)
  {
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i] );
    }
    printf("Copied array is shown below\n");
    for(i=0;i<n;i++)
    {
      b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }
    printf("\n\n");
  }
  else
  {
    printf("Invalid choice\n");
  }
}
