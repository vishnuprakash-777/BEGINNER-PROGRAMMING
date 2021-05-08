//Program to check wheather the word is palindrome or not.Also number of alphabets in the word.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100],b[100];
  int count,i,found=0;
  printf("Enter the word:");
  scanf("%s",a);
  count=strlen(a);
  printf("No of alphabets = %d\n",count);
  strcpy(b,a);
  for(i=0;i<count;i++)
  {
    a[i]=toupper(a[i]);
  }
  for(i=0;i<=count/2;i++)
  {
    if(a[i]!=a[count-(i+1)])
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
