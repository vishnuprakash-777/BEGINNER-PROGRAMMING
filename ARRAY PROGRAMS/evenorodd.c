//Write  a program that interchanges the odd and even numbers of an array.
#include<stdio.h>
int main()
{
  int a[10000],n,i,c;
  char choice;
  do
  {
    printf("Enter the number of values(It must be even number):");
    scanf("%d",&n);
    if(n<=10000 && n>=1 && n%2==0)
    {
      printf("Enter the values:");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("Interchanged odd and even numbers of an array is given below:\n");
      for(i=0;i<n;i=i+2)
      {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        printf("%d %d ",a[i],a[i+1]);
      }
      printf("\n");
    }
    else
    {
      printf("Invalid choice\n");
    }
    getchar();
    printf("Do you want to continue(y/n):");
    choice=getchar();
  }while(choice=='y');
  printf("Bye!!\n\n");
}
