/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number of subjects he has failed in. use the following logic:
a.If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is 5 marks per subject.
b.If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is 4 marks per subject.
c.If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks.*/
#include<stdio.h>
int main()
{
  int c,f,count,i;
  char choice;
  do
  {
    printf("Enter the class obtained by the student(1/2/3):");
    scanf("%d",&c);
    if(c==1 || c==2 || c==3)
    {
      printf("Enter the number of subjets failed:");
      scanf("%d",&f);
    }
    switch(c)
    {
      case 1:
        if(f<=3 && f>=0)
        {
          printf("%d grace marks awarded\n",f*5);
        }
        else
        {
          printf("No garce mark awarded\n");
        }
        break;
      case 2:
        if(f<=2 && f>=0)
        {
          printf("%d grace marks awarded\n",f*4);
        }
        else
        {
          printf("No garce mark awarded\n");
        }
        break;
      case 3:
        if(f==1 || f==0)
        {
          printf("%d grace marks is awarded\n",f*5);
        }
        else
        {
          printf("No garce mark awarded\n");
        }
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
    getchar();
    printf("Do you want to continue(y/n):");
    choice=getchar();
  }while(choice=='y');
  printf("BYE!!\n\n");
}
