// WAP to perform binary search in array

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If element is not present in array
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}