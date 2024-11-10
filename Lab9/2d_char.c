#include<stdio.h>
#include<string.h>
int main(){
	char words[5][20] = {"bananas", "mood", "university", "pakistan", "dinner"};
	char user[20]; 
	int found=0, i;
	printf("Enter a word to search: ");
	scanf("%s", user);
	for (i=0; i<5; i++){
		if (strcmp(words[i], user)==0){
			found = 1;
			break;
		}
	}
	if (found){
		printf("\nFound");
	} else {
		printf("\nNot found");
	}
	return 0;
}
