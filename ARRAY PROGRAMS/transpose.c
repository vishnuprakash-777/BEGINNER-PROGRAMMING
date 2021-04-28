//Transpose of matrix
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],m,n,i,j;
  printf("Enter the order of matrix:");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
    printf("Enter the matrix:");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("The original matrix\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        b[j][i]=a[i][j];
      }
    }
    printf("Transpose of a matrix\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        printf("%d\t",b[i][j]);
      }
      printf("\n" );
    }
  }
}
