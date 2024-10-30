#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], product[3][3];
	int i, j, k;
	printf("Entering matrix 1\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Enter elements of the matrix: ");
			scanf("%d", &a[i][j]);
		}
	}
	printf("Entering matrix 2\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Enter elemnts of the matrix: ");
			scanf("%d", &b[i][j]);
		}
	}
	printf("Matrix1\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			product[i][j] = 0;
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			for (k=0; k<3; k++){
			product[i][j] = product[i][j] + (a[i][k]*b[k][j]);
		    }
		}
	}
	printf("Resultant matrix\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d  ", product[i][j]);
		}
		printf("\n");
	}
	return 0;
}
