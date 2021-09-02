//Write a program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int count,i;
  printf("Enter a string:");
  gets(a);
  count=strlen(a);
  printf("Reverse of string is ");
  for(i=(count-1);i>=0;i--)
  {
    printf("%c",a[i]);
  }
  printf("\n");
}
