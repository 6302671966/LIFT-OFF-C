#include<stdio.h>
#include<math.h>


int main()
{

float r, d ,c,s,pi=3.14;

printf ("enter the radius of the circle");
scanf ("%f",&r);
d=2*r;
printf("the diameter of the circle is %f\n",d);
c=2*pi*r;
printf("the cirmuference of the circle is %f\n",c);
s=pi*r*r;
printf("the area of the circle is %f",s);

}