#include<stdio.h>
 void min_max(int a[], int n, int *min, int *max){
 	*min = a[0];
 	*max = a[0];
 	int i;
 	for (i=0; i<n; i++){
 		if (a[i]>*max){
 			*max=a[i];
		 }
		 else if (a[i]<*min){
		 	*min = a[i];
		 }
	}
}
int main(){
	int n, min, max; 
	printf("Enter the no of elements: ");
	scanf("%d", &n);
	int a[n], i;
	for (i=0; i<n; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	min_max(a, n, &min, &max);
	printf("\nMaximum number: %d", max);
	printf("\nMinimum Number: %d", min);
	return 0;
}

