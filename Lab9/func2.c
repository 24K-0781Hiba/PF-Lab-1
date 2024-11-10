#include<stdio.h>
const char* evenodd(int num);
int main(){
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	printf("%s", evenodd(num));
	return 0;
}
const char* evenodd(int num){
	if (num%2==0){
		return "even";
	}
	else {
		return "odd";
	}
}
