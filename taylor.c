#include<stdio.h>
#include<math.h>
#define PI 3.1428
int main()
{
  float x,degree,nume,deno=1.0,sum=0,term;
  int i=1;
  printf("Enter degree");
  scanf("%f",&degree);
  x=degree*(PI/180.0);
  do
  {
      term = nume/deno;
      sum = sum+term;
      i=i+2;
      nume=(-nume)*x*x;
      deno=deno*i*(i-1);
      printf("TERM=%f\n",term);
  }while(fabs(term)>=0.0001);
  printf("Computed value of sin(%f)=%f\n",degree,sum);
  printf("Value from library function is sin(%f)=%f\n",degree,sin(x));
 return 0;  
}
