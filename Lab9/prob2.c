#include<stdio.h>
void swap(int a, int b){
	int temp;
	temp = a; 
	a = b;
	b = temp;
	printf("\nThe first number is now: %d", a); 
    printf("\nThe second number is now: %d", b);
}
int main(){
	int a, b;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	swap(a, b);
	return 0;
}
