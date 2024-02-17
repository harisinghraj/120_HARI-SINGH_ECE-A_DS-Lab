//e.Updating the array , multiply the odd-indexed elements by 2 and adding 5 to all the elements at even index.

#include <stdio.h>

void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            // Even index: add 5
            arr[i] += 5;
        } else {
            // Odd index: multiply by 2
            arr[i] *= 2;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Update the array
    updateArray(arr, size);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}