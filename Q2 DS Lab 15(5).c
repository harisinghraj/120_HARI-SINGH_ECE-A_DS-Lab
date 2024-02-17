//e.Updating the array , multiply the odd-indexed elements by 2 and adding 5 to all the elements at even index.

#include <stdio.h>
#include <stdlib.h>

void updateArray(int **arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            (*arr)[i] += 5;  // Adding 5 to elements at even index
        } else {
            (*arr)[i] *= 2;  // Multiplying elements at odd index by 2
        }
    }
}

int main() {
    int *arr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    updateArray(&arr, size);

    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}