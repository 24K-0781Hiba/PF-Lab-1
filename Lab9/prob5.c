#include<stdio.h>
#include<string.h>
void reverse(char a[])
{
	int length = strlen(a);
	int i;
	for (i=0; i<length/2; i++){
		char temp = a[i];
		a[i] = a[length-1-i];
		a[length-1-i]=temp;
	}
}
int main(){
	char a[20];
	printf("Enter a string: ");
	scanf("%s", a);
	reverse(a);
	printf("Reversed string: %s", a);
	return 0;
}
