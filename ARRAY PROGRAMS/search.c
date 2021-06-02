/*n numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user.
Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.*/
#include<stdio.h>
int main()
{
  {
    int a[10000],i,n,c,count;
    char choice;
    do
    {
      printf("Enter the number of values:" );
      scanf("%d",&n);
      if(n<=10000 && n>=1)
      {
        printf("Enter the values:");
        for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }
        printf("Enter the value to be searched:");
        scanf("%d",&c);
        count=0;
        for(i=0;i<n;i++)
        {
          if(a[i]==c)
          {
            count++;
          }
        }
        if(count==0)
        {
          printf("The entered value is not in tha array\n\n");
        }
        else
        {
          printf("The entered value %d appeared %d times in the array\n\n",c,count);
        }
      }
      else
      {
        printf("Invalid choice\n\n");
      }
      getchar();
      printf("Do you want to continue(y/n):");
      choice=getchar();
    }while(choice=='y');
    printf("Bye!!\n\n");
  }

}
