#include<stdio.h>
int product(int num1, int num2);
int main()
{
	int result;
	int num1, num2;
	result = product(num1, num2);
	printf("Product is: %d", result);
	return 0;
}
int product(int num1, int num2){
	int product;
	printf("enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	product = num1*num2;
	return product;
}
