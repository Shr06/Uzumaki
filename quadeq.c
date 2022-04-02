/*
Experiment no -2
Name-SHRUTHI A
ROLL NO-63
*/


#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,r1,r2,d,real_part,imag_part;
  printf("Enter coefficients of quadratic equations\n");
  scanf("%f\n%f\n%f\n",&a,&b,&c);
  if(a==0)
  {
    printf("THE EQUATION IS LINEAR\n");
    return 1;
  }
  else
  {
  printf("THE EQUATION IS LINEAR\n");
  d= b*b-4*a*c;
  if(d==0)
  {
      printf("THE ROOTS ARE REAL AND EQUAL\n");
      r1 = r2 = -b/2*a;
      printf("THE ROOTS are r1=%f and r2=%f\n",r1,r2);
  }
  else if(d>0)
  {
      printf("The roots are real and distinct\n");
      r1 = -b + sqrt(d)/2*a;
      r2 = -b - sqrt(d)/2*a;
      printf("the roots are r1=%f and r2=%f\n");
  }
  else(d<0);
  {
      printf("The roots are imaginary\n");
      real_part= -b/2*a;
      imag_part=sqrt(-d)/2*a;
      printf("The roots are\n");
      printf("r1=%f + i %f\n",real_part,imag_part);
      printf("r2=%f -i%f\n",real_part,imag_part);
  }
  }
  return 0;

}
