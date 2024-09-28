#include<stdio.h>
int main()
{
  int num1, num2;
  printf("enter 1st number: ");
  scanf("%d",&num1);
  printf("enter 2nd number: ");
  scanf("%d",&num2);
  printf("num1&num2= %d",num1&num2); //AND
  printf("\nnum1|num2= %d",num1|num2); //OR
  printf("\nnum1^num2= %d",num1^num2); //XOR
  printf("\n~num1= %d",~num1); //NOT
  printf("\n~num2= %d",~num2); //NOT
  printf("\nnum1<<1= %d",num1<<1); //LEFT SHIFT
  printf("\nnum2<<1= %d",num2<<1); //LEFT SHIFT
  printf("\nnum1>>1= %d",num1>>1); //RIGHT SHIFT
  printf("\nnuM2>>1= %d",num2>>1); //RIGHT SHIFT
  return 0;
}