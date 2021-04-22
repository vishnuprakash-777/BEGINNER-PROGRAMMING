#include<stdio.h>
void main()
{
  int a[100],n,i,min,max;
  printf("Enter the number of values:");
  scanf("%d",&n);
  if(n<=100)
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
    printf("The smallest value = %d \n",min);
  }
  else
  {
    printf("Invalid condition");
  }
}
