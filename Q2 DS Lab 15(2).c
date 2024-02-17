//b.Inserting an element at specified position.

#include <stdio.h>
#include <stdlib.h>

void insertElement(int **arr, int *size, int pos, int element) {
    (*size)++;
    *arr = (int *)realloc(*arr, (*size) * sizeof(int));
    if (*arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = *size - 1; i > pos; i--) {
        (*arr)[i] = (*arr)[i - 1];
    }

    (*arr)[pos] = element;
}

int main() {
    int *arr;
    int size = 0;
    int pos, element;

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

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
        printf("Invalid position. Insertion failed.\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(&arr, &size, pos, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}