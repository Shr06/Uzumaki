/*
EXPERIMENT NO-6
NAME - SHRUTHI A 
ROLL NO - L-63
*/


#include<stdio.h>
int main()
{
  int a[10];
  int key,first,last,mid,n,j,i,temp;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("\n Enter the array of element:");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if (a[j] > a[j+1])
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
  printf("\n The array of elements in sorted order %d",a[i]);
  }
  printf("\n Enter the key element");
  scanf("%d",&key);
  first = 0; last = n-1;
  while(first<=last)
  {
    mid = (first+last)/2;
    if(key == a[mid])
    {
      printf("Found the element in %d position",mid+1);
      return 0;
    }
    else if(key>a[mid])
    {
      first = mid + 1;
    }
    else
    {
      last = mid - 1;
    }
  }
  printf("THE ELEMENT %d NOT FOUND IN THE ARRAY\n",key);
return 0;

}