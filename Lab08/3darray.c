#include<stdio.h>
int main()
{
	int pg, i, j, sum;
	int a[2][3][3] = {{{1,2,3}, {4,5,6}, {7,8,9}}, {{4,0,8}, {3,2,1}, {9,5,10}}};
	for (pg=0; pg<2; pg++){
		sum = 0;
		for(i=0; i<3; i++){
			for (j=0; j<3; j++){
				sum += a[pg][i][j];
			}
		}
		printf("\nThe sum of elments on page %d = %d", pg+1, sum);
	}
	return 0;
}
