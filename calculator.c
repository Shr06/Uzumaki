#include<stdio.h>
int main()
{
  int num1,num2;
  float result;
  char op;
  
  printf("Enter two integers\n");
  scanf("%d %d",&num1,&num2);
  printf("Enter the operators");
  scanf("%c ",&op);
  if(op=='+')
  {
    result=num1+num2;
  }
  else if(op=='-')
  {
    result=num1-num2;
  }
  else if(op=='*')
  {
    result=num1*num2;
  }
 else if(op=='/')
  {
    if(num2==0)
    {
      printf("Divide by zero error");
      return 0;
    }
   else
    {  
       result=num1/num2;
    }
  }
  else if(op=='%')
  {
    if(num2==0)
    {
      printf("Divide by zero error");
      return 0;
    }
   else
    {  
       result=num1%num2;
    }
 }
 else
 {
   printf("INVALID OPERATOR");
 }
 printf("The result of %d %c %d",num1,op,num2);
 return 0;  
}
