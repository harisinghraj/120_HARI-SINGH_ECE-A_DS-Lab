 // Q-1.Write menu-driven program in c to input 1D array and perform following operations:
//a.Linear search for an element.

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index where the element is found
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int arr[] = {10, 5, 7, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int index = linearSearch(arr, n, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;

}



