/*Write a program to receive values of latitude (L1,L2) and longitude(G1,G2) in degrees of two places on earth and output the distance (D) in nautical miles. The formula for the distance in nautical miles is
D = 3963 cos-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2-G1))*/
#include<stdio.h>
#include<math.h>
void main()
{
  float n,d,l1,l2,g1,g2,p,q,r,s;
  printf("enter the latitudes in degree:");
  scanf("%f%f",&p,&q);
  printf("enter the longitudes in degree:");
  scanf("%f%f",&r,&s);
  l1=p*(M_PI/180);
  l2=q*(M_PI/180);
  g1=r*(M_PI/180);
  g2=s*(M_PI/180);
  d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1)));
  printf("The distance is %f\n",d);
}
