//Program to check wheather the word is palindrome or not.Also find number of alphabets in the word.
#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int count,i,found=0;
  printf("Enter the word:");
  scanf("%s",a);
  count=strlen(a);
  printf("No of alphabets = %d\n",count);
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
    printf("%s is a palindrome\n",a);
  }
  else
  {
    printf("%s is not a palindrome\n",a);
  }

}
