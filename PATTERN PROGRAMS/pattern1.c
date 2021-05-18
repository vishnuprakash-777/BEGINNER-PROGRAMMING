/*Write programs using nested loops to produce the following output:
A
A B 
A B C
A B C D
A B C D E*/
#include<stdio.h>
int main()
{
  int i,j;
  char a;
  for(i=0;i<5;i++)
  {
    for(j=0;j<=i;j++)
    {
      a='A'+j;
      printf("%c\t",a);
    }
    printf("\n");
  }
}
