/*The body mass index (BMI) is defined as the ratio of the weight of a person in kilograms to the square of the height in meters. Write a program that receives weight and height, calculates  the BMI and reports the BMI category as per the following table.

BMI Category                      BMI

Starvation                        < 15
Anorexic                          15.1 to 17.5
Underweight                       17.6 to 18.5
Ideal                             18.6 to 24.9
Overweight                        25 to 25.9
Obese                             30 to 30.9
Morbidly Obese                    >=40
*/
#include<stdio.h>
#include<math.h>
int main()
{
  float w,h,bmi;
  printf("Enter the weight(kg):");
  scanf("%f",&w);
  printf("Enter the height(m)");
  scanf("%f",&h);
  bmi= w/pow(h,2);
  if(bmi<=15)
  {
    printf("%f BMI category is Starvation\n",bmi);
  }
  else if(bmi>15 && bmi<=17.5)
  {
    printf("%f BMI category is Anorexic\n",bmi);
  }
  else if(bmi>17.5 && bmi<=18.5)
  {
    printf("%f BMI category is Underweight\n",bmi);
  }
  else if(bmi>18.5 && bmi<=24.9)
  {
    printf("%f BMI category is Ideal\n",bmi);
  }
  else if(bmi>24.9 && bmi<=25.9)
  {
    printf("%f BMI category is Overweight\n",bmi);
  }
  else if(bmi>=30 && bmi<=30.9)
  {
    printf("%f BMI category is Obese\n",bmi);
  }
  else if(bmi>=40)
  {
    printf("%f BMI category is Morbidly Obese\n",bmi);
  }
  else
  {
    printf("Not under BMI category\n");
  }
}
