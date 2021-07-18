#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
  char *b;
  int count,i,found=0;
  count=strlen(argv[1]);
  printf("No of alphabets = %d\n",count);
  b=argv[1];
  for(i=0;i<count;i++)
  {
    argv[1][i]=toupper(argv[1][i]);
  }
  for(i=0;i<=count/2;i++)
  {
    if(argv[1][i]!=argv[1][count-(i+1)])
    {
      found=1;
      break;
    }
  }
  if(found==0)
  {
    printf("%s is a palindrome\n",b);
  }
  else
  {
    printf("%s is not a palindrome\n",b);
  }
}
