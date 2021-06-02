#include<stdio.h>
int fact(int n)
{
  if(n==1 || n==0)
  {
    return 1;
  }
  return n*fact(n-1);

}
int ncr(int n,int r)
{
  return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
  int n,i,j,k;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=n-1;j>i;j--)
    {
      printf("\t");
    }
    for(k=0;k<=i;k++)
    {
      printf("%d\t\t",ncr(i,k));
    }
    printf("\n");
  }
}
