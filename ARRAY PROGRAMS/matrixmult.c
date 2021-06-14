//Multiplication of matrix
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],m,n,i,j,p,q,k,total=0,c[10][10];
  printf("Enter the order of first matrix:");
  scanf("%d%d",&m,&n);
  printf("Enter the order of second matrix:");
  scanf("%d%d",&p,&q);
  if(m<=10 && n<=10 && p<=10 && q<=10 && n==p)
  {
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("The first matrix\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
    printf("Enter the second matrix:");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    printf("The second matrix\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%d\t",b[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        for(k=0;k<p;k++)
        {
          total+=a[i][k]*b[k][j];
        }
        c[i][j]=total;
        total=0;
      }
    }
    printf("Final matrix\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Please enter the order less than or equal to 10 OR The number of columns of first matrix and the number of rows of second matrix should be equal \n");
  }
}
