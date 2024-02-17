//c.Deleting an element from the specified position.
#include <stdio.h>
#include <stdlib.h>

void deleteElement(int **arr, int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position. Deletion failed.\n");
        return;
    }

    for (int i = pos; i < *size - 1; i++) {
        (*arr)[i] = (*arr)[i + 1];
    }
    (*size)--;
    *arr = (int *)realloc(*arr, (*size) * sizeof(int));
    if (*size > 0 && *arr == NULL) {
        printf("Memory reallocation failed.\n");
        exit(1);
    }
}

int main() {
    int *arr;
    int size = 0;
    int pos;

    printf("Enter the initial size of the array: ");
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

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    deleteElement(&arr, &size, pos);

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

