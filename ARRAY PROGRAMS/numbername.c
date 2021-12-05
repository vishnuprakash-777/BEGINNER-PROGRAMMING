#include<stdio.h>
void check(int a)
{
  if(a==0)
  {
    printf(" ");
  }
  else if(a==1)
  {
    printf("One");
  }
  else if(a==2)
  {
    printf("Two");
  }
  else if(a==3)
  {
    printf("Three");
  }
  else if(a==4)
  {
    printf("Four");
  }
  else if(a==5)
  {
    printf("Five");
  }
  else if(a==6)
  {
    printf("Six");
  }
  else if(a==7)
  {
    printf("Seven");
  }
  else if(a==8)
  {
    printf("Eight");
  }
  else
  {
    printf("Nine");
  }
}
void check2(int a)
{
  if(a==0)
  {
    printf(" ");
  }
  else if(a==1)
  {
    printf("Ten");
  }
  else if(a==2)
  {
    printf("Twenty");
  }
  else if(a==3)
  {
    printf("Thirty");
  }
  else if(a==4)
  {
    printf("Forty");
  }
  else if(a==5)
  {
    printf("Fifty");
  }
  else if(a==6)
  {
    printf("Sixty");
  }
  else if(a==7)
  {
    printf("Seventy");
  }
  else if(a==8)
  {
    printf("Eighty");
  }
  else
  {
    printf("Ninty");
  }
}
void check3(int a)
{
  if(a==1)
  {
    printf("Eleven");
  }
  else if(a==2)
  {
    printf("Twelve");
  }
  else if(a==3)
  {
    printf("Thirteen");
  }
  else if(a==4)
  {
    printf("Fourteen");
  }
  else if(a==5)
  {
    printf("Fifteen");
  }
  else if(a==6)
  {
    printf("Sixteen");
  }
  else if(a==7)
  {
    printf("Seventeen");
  }
  else if(a==8)
  {
    printf("Eighteen");
  }
  else
  {
    printf("Nineteen");
  }
}
int main()
{
  int a[10],i;
  int l=0,n,n1,n2;
  printf("Enter the number:");
  scanf("%d",&n);
  n1=n;
  n2=n;
  while(n>0)
  {
    n=n/10;
    l++;
  }
  for(i=0;i<l;i++)
  {
    a[i]=n1%10;
    n1=n1/10;
  }
  switch(l)
  {
    case 1:
    {
      check(a[0]);
      break;
    }
    case 2:
    {
      if(n2==10)
      {
        check2(1);
      }
      if(n2%10==0 && n2>10)
      {
        check2(a[1]);
      }
      if(n2>10 && n2<20)
      {
        check3(a[0]);
      }
      else
      {
        check2(a[1]);
        check(a[0]);
      }
      break;
      case 3:
      {
        if(n2%100==0)
        {
          check(a[2]);
          printf("Hundred\n");
        }
        else if(a[1]==1 && a[0]==0)
        {
          check(a[2]);
          printf("Hundred");
          check2(a[1]);
        }
        else if(a[1]==1 && a[0]>0)
        {
          check(a[2]);
          printf("Hundred");
          check3(a[3]);
        }
        else
        {
          check(a[2]);
          printf("Hundred\n");
          check2(a[1]);
          check(a[0]);
        }
        break;
      }
      case 4:
      {
        if(n2%1000==0)
        {
          check(a[3]);
          printf("Thousand");
          if(n2%100==0)
          {
            check(a[2]);
            printf("Hundred");
          }
        }
        else if(a[1]==1 && a[0]==0 && a[2]==0)
        {
          check(a[3]);
          printf("Thousand");
          check2(a[1]);
        }
        else if(a[1]==1 && a[0]>0 && a[2]==0)
        {
          check(a[3]);
          printf("Thousand");
          check3(a[0]);
        }
        else if(a[1]==1 && a[0]==0)
        {
          check(a[3]);
          printf("Thousand");
          check(a[2]);
          printf("Hundred");
          check2(a[1]);
        }
        else if(a[1]==1 && a[0]>0)
        {
          check(a[3]);
          printf("Thousand");
          check(a[2]);
          printf("Hundred");
          check3(a[0]);
        }
        else
        {
          check(a[3]);
          printf("Thousand");
          check(a[2]);
          printf("Hundred");
          check2(a[1]);
          check(a[0]);
        }
        break;
      }
    }
  }
}
