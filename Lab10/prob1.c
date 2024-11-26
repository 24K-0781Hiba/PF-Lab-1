#include <stdio.h>

void print(int a[], int size) {
    if (size == 0) return;
    printf("%d ", a[0]);
    print(a + 1, size - 1);
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int a[size];
    int i;
    for (i=0; i<size; i++){
    	printf("Enter element %d: ", i+1);
    	scanf("%d", &a[i]);
	}
    print(a, size);
    return 0;
}
