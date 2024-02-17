// program with dynamic array 
//a.Linear search for an element 


#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index where the key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int *arr;
    int n, key, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    free(arr); // Free the dynamically allocated memory

    return 0;
}