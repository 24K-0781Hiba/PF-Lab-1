#include<stdio.h>
int main()
{
	int i, j;
    int a[2][2];
    for (i=0; i<2; i++){
    	for (j=0; j<2; j++){
    		printf("enter matrix element: s");
    		scanf("%d", &a[i][j]);
		}
	}
	printf("\nprinting matrix\n");
	for (i=0; i<2; i++){
    	for (j=0; j<2; j++){
            printf("  %d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n Printing transpose of a matrix\n");
	for (j=0; j<2; j++){
		for (i=0; i<2; i++){
			printf("  %d", a[i][j]);
		}
	printf("\n");
	}
    return 0;
}
