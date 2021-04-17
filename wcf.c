/*Wind chill factor (wcf) is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature and is calculated as follows
wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v0.16
where v is wind velocity and t is the temperature. Write a program to receive the values of v and t and find the wind chill factor (wcf).*/
#include<stdio.h>
#include<math.h>
void main()
{
  float t,v,wcf;
  printf("Enter the temperature:");
  scanf("%f",&t);
  printf("Enter the wind velocity:");
  scanf("%f",&v);
  wcf=35.74+(0.6215*t)+((0.4275*t*pow(v,0.16))-(35.75*pow(v,0.16)));
  printf("The wind chill factor = %f\n",wcf);
}
