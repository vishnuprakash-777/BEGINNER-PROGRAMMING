/*Write a program to produce the output in following pattern
			1
		2		3
	4		5		6
7		8		9		10
*/
#include<stdio.h>
int main()
{
  int n,i,j,count=1;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<(2*n)-1;j++)
    {
      if(n%2==0)
      {
        if(j<(n-1)-i || j>(n-1)+i)
        {
          printf(" \t");
        }
        else if(i%2==0 && j%2==0 || i%2==1 && j%2==1)
        {
          printf(" \t");
        }
        else
        {
          printf("%d\t",count);
          count++;
        }
      }
      else
      {
        if(j<(n-1)-i || j>(n-1)+i)
        {
          printf(" \t");
        }
        else if(i%2==1 && j%2==0 || i%2==0 && j%2==1)
        {
          printf(" \t");
        }
        else
        {
          printf("%d\t",count);
          count++;
        }
      }
    }
    printf("\n");
  }
}
