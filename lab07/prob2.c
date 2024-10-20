#include<stdio.h>
int main()
{
  int n, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i<n; i++)
  {
    printf("\nenter the elements of the array: ");
    scanf("%d", &a[i]);
  }
  printf("array in reverse order:");
  for (i=n-1; i>=0; i--)
  {
    printf("%d ", a[i]);
  }
  return 0;
}
