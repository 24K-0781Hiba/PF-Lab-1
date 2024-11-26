#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size) return -1;
    if (arr[index] == target) return index;
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7,8 , 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element u want to search: ");
    scanf("%d", &target);
    int index = linearSearch(arr, size, target, 0);
    if (index != -1)
        printf("%d found at index %d\n", target, index);
    else
        printf("%d not found\n", target);
    return 0;
}
