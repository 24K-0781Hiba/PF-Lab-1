#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	 prime( n);
	return 0;
}
void prime(int n){
	int i;
	for (i=2; i*i<=n; i++){
		if (n%i==0){
			printf("The number is not prime");
		}
		else {
			printf("The number is prime");
		}
	}
}
