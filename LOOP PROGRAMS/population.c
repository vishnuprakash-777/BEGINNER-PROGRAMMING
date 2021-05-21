/*Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
 Write a program to determine the population at the end of each year in the last decade.*/
 #include<stdio.h>
 int main()
 {
   int i,p=100000;
   for(i=1;i<=10;i++)
   {
     p=p-(p*0.1);
     printf("%d year population is %d\n",11-i,p);
   }
 }
