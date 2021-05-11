//Sorting of strings in ascending alphabetical order and descending alphabetical order.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100][100],c[100][100],b[100][100];
  int n,i,j;
  printf("Enter the number of words:");
  scanf("%d",&n);
  printf("Enter %d words:\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%s",a[i]);
  }
  for(i=0;i<n;i++)
  {
    strcpy(b[i],a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<strlen(a[i]);j++)
    {
      a[i][j]=toupper(a[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<strlen(b[i]);j++)
    {
      b[i][j]=toupper(b[i][j]);
    }
  }
  printf("Sorting of strings in ascending alphabetical order:\n");
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(a[i],a[j])>0)
      {
        strcpy(c[i],a[i]);
        strcpy(a[i],a[j]);
        strcpy(a[j],c[i]);
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
  printf("\n\n");
  printf("Sorting of strings in descending alphabetical order:\n");
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(b[i],b[j])<0)
      {
        strcpy(c[i],b[i]);
        strcpy(b[i],b[j]);
        strcpy(b[j],c[i]);
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%s\t",b[i]);
  }
  printf("\n\n");
}
