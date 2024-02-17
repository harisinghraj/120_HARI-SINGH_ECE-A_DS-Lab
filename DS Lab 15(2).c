//b.Inserting an element at specified position.

#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at a specified position in an array
void insertElement(int arr[], int *size, int position, int element) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array
    int position = 2; // Position where element is to be inserted
    int element = 10; // Element to be inserted

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &size, position, element);

    printf("Array after inserting %d at position %d: ", element, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}