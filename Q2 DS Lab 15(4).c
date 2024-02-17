//d.Reversing the array.


#include <stdio.h>
#include <stdlib.h>

void reverseArray(int **arr, int size) {
    int *temp = (int *)malloc(size * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy elements from original array to temporary array in reverse order
    for (int i = 0; i < size; i++) {
        temp[i] = (*arr)[size - 1 - i];
    }

    // Copy elements from temporary array back to original array
    for (int i = 0; i < size; i++) {
        (*arr)[i] = temp[i];
    }

    free(temp);
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

    reverseArray(&arr, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}