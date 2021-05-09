//Given your username is "rahulk" & password is "rak123". Write a program if the username and password are correct it prints "welcome" else it prints "access denied".
#include<stdio.h>
#include<string.h>
int main()
{
  char username[200], password[200];
  printf("Enter the username:");
  scanf("%s",username);
  printf("Enter the password:");
  scanf("%s",password);
  if(strcmp(username,"rahulk")==0 && strcmp(password,"rak123")==0)
  {
    printf("Welcome\n");
  }
  else
  {
    printf("Access Denied\n");
  }
}
