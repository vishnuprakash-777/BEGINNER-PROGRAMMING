/*If a character is entered through the keyboard, write a program to determine whether the character is a capital letter, small letter, a digit or socal symbol.

Characters         -          ASCII values
  A-Z              -             65-90
  a-z              -             97-122
  0-9              -             48-57
Special symbols    -      0-47, 58-64, 91-96, 123-127
*/
#include<stdio.h>
int main()
{
  char a;
  printf("Enter the charcater:");
  a=getchar();
  if(a>=65 && a<=90)
  {
    printf("%c is a capital letter\n",a);
  }
  else if(a>=97 && a<=122)
  {
    printf("%c is a small letter\n",a);
  }
  else if(a>=48 && a<=57)
  {
    printf("%c is a digit\n",a);
  }
  else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
  {
    printf("%c is a special symbol\n",a );
  }
  else
  {
    printf("It is invalid");
  }
}
