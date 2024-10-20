#include<stdio.h>
int main()
{
  int n, i, min, max;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i<n; i++)
  {
    printf("enter the elements of the array: ");
    scanf("%d", &a[i]);
  }
  max = a[0];
  min = a[0];
  for (i=1; i<n; i++)
  {
    if (a[i]<min)
    {
      min = a[i];
    }
    else if (a[i]>max) 
    {
      max = a[i];
    }
  }
  printf("Maximum number of the array is: %d", max);
  printf("\nMinimum number of the array is: %d", min);
  return 0;
}
  
