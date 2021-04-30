//Selection sorting ascending order & decsending order
#include<stdio.h>
int main()
{
  int a[100],b[100],n,i,j,c;
  printf("Enter the number of values:");
  scanf("%d",&n);
  if(n<=100)
  {
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      b[i]=a[i];
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
          c=a[i];
          a[i]=a[j];
          a[j]=c;
        }
      }
    }
    printf("Ascending order given below\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\n\n");
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(b[i]<b[j])
        {
          c=b[i];
          b[i]=b[j];
          b[j]=c;
        }
      }
    }
    printf("Decsending order given below\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",b[i]);
    }
    printf("\n\n");
  }
  else
  {
    printf("Enter a value less than or equal to 100 ");
  }
}
