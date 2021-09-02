//Write a program which reads your name from the keyboard an outputs a list of ASCII codes which represents your name.
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i,count;
  printf("Enter your name:");
  gets(a);
  count=strlen(a);
  printf("ASCII code of name is ");
  for(i=0;i<count;i++)
  {
    printf("%d",a[i]);
  }
  printf("\n");
}
