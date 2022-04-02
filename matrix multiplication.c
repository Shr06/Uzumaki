#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10];
  int m,n,p,q,i,j,k;
  printf("\nENTER ORDER OF MATRIX A\n");
  scanf("%d\t%d",&m,&n);
   printf("\nENTER ORDER OF MATRIX B\n");
  scanf("%d\t%d",&p,&q);
  if(n!=p)
  {
    printf("invalid");
    return 0;
    
  }
   printf("\nENTER elements OF MATRIX A\n",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
   printf("\nENTER elements OF MATRIX A\n",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
   printf("\nENTER elements OF MATRIX B\n",p*q);
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
   printf("\nENTER elements OF MATRIX B\n",p*q);
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t",b[i][j]);
        }
      printf("\n");
    }
   for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
        {
      c[i][j]=0;
   for(k=0;k<n;k++)
        {
          c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
          }
          }
      }
  printf("the matrix is\n");
  for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
        {
          printf("%d\t",c[i][j]);
          }
      printf("\n");
      }
  return 0;  
}
