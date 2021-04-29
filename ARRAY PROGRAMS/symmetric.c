// To check wheather the matrix is symmetric or not?
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],m,n,i,j,found;
  printf("Enter the order of matrix:");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10 && m==n)
  {
    printf("Enter the matrix:");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        b[i][j]=a[i][j];
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        found=0;
        if(a[i][j]!=b[j][i])
        {
          found=1;
          break;
        }
      }
    }
    if(found==0)
    {
      printf("It is Symmetric\n");
    }
    else
    {
      printf("It is not Symmetric\n");
    }
  }
  else
  {
    printf("Please enter the order less than or equal to 10 or enter a square matrix\n");
  }
}
