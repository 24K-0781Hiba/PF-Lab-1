#include<stdio.h>
#include<string.h>
int palin(char word[]){
	int length = strlen(word);
	int i; 
	for (i=0; i<length/2; i++){
		if (word[i]==word[length-i-1]){
			return 1;
		}else {
			return 0;
		}
	}
}
int main(){
	int i;
	char word[5][20];
	for (i=0; i<5; i++){
		printf("Enter the word: ");
		scanf("%s", word[i]);
	}
	for (i=0; i<5; i++){
		int result = palin(word[i]);
		if (result==1){
			printf("\n%s is a Palindrome", word[i]);
		}
		else if (result==0){
			printf("\n%s is not a palindrome", word[i]);
		}
	}
	return 0;
}
