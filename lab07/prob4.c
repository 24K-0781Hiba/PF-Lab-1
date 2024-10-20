#include<stdio.h>
int main()
{
	int n, i;
	printf("Array size: ");
	scanf("%d", &n);
	int a[i], freq[i];
	for (i=0; i<n; i++){
		freq[i]=0;
	}
	for (i=0; i<n; i++){
		printf("Element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		freq[a[i]]++;
    }
    for (i=0; i<n; i++){
    	if (freq[i]>1){
    		printf("\nNumber %d occurs more than once", a[i]);
		}
    }
    return 0;
}
