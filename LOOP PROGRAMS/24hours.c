//Write a program to print 24 Hours of a date with suitable suffixes such as AM, PM, Noon, Midnight
#include<stdio.h>
int main()
{
  int i,a,b,c;
  for(i=0;i<24;++i)
  {
    if(i==0)
    {
      printf("12:00 Midnight\n");
      printf("Hour no %d of a day\n\n",i+1);
    }
    else if(i<12 && i>0)
    {
      printf("%d AM\n",i);
      printf("Hour no %d of a day\n\n",i+1);
    }
    else if(i==12)
    {
      printf("12:00 Noon\n");
      printf("Hour no %d of a day\n\n",i+1);
    }
    else
    {
      printf("%d PM\n",i%12);
      printf("Hour no %d of a day\n\n",i+1);
    }
  }
}
