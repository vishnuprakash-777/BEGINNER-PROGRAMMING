/*Write programs using nested loops to produce the following output:
      &
    &	 	&
  &	 	 	 	&
&	&	&	&	&	&	&
*/       
#include<stdio.h>
int main()
{
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<7;j++)
    {
      if((j==3-i || j==3+i) && i<3)
      {
        printf("&\t");
      }
      else if(i==3)
      {
        printf("&\t");
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }
}
