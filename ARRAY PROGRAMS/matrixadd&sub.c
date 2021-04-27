//Addition & Subraction of matrix
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],x[10][10],y[10][10],m,n,i,j;
  printf("Enter the order of the matrices:" );
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("Enter the second matrix:");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    printf("Addition of matrices\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        x[i][j]=a[i][j]+b[i][j];
        printf("%d\t",x[i][j]);
      }
      printf("\n");
    }
    printf("Subtraction of matrices\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        y[i][j]=a[i][j]-b[i][j];
        printf("%d\t",y[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Please enter the order less than or equal to 10\n");
  }
}
