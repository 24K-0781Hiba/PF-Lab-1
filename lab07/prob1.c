#include<stdio.h>
int main()
{
  int n, sum = 0, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i<n; i++)
  {
    printf("\nenter the elements of the array: ");
    scanf("%d", &a[i]);
    sum = sum + a[i];
  }
  printf("The sum is: %d", sum);
  return 0;
}

  
