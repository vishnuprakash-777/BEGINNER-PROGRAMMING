//Program to print a word such that if we inupt (abc' it gives 'cde'/'xyz'  it gives 'zab'.
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int count=0,i;
  printf("Enter the word:");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  printf("%d\n",count);
  printf("New word is ");
  for(i=0;i<count;i++)
  {
    if(a[i]=='y')
    {
      printf("a");
    }
    else if(a[i]=='z')
    {
      printf("b");
    }
    else
    {
      a[i]=a[i]+2;
      printf("%c",a[i]);
    }
  }
  printf("\n\n");
}
