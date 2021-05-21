/*Write a program to produce the following output
			1
		2		3
	4		5		6
7		8		9		10
*/
#include<stdio.h>
int main()
{
  int i,j,count=1;
  for(i=0;i<4;i++)
  {
    for(j=0;j<7;j++)
    {
      if(j<3-i || j>3+i)
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
    printf("\n");
  }
}
