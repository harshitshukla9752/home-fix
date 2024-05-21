#include <stdio.h>

int findMaxRecursive(int arr[], int n, int max) {
    // Base case: If there's only one element left in the array
    if (n == 1)
        return max;

    // Compare the current element with the maximum found so far
    if (arr[n - 1] > max) {
        max = arr[n - 1];
    }

    // Recursively call the function with the remaining elements
    return findMaxRecursive(arr, n - 1, max);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    // Function to take input from the user without using a loop
    void takeInput(int arr[], int n, int index) {
        if (index == n)
            return;
        scanf("%d", &arr[index]);
        takeInput(arr, n, index + 1);
    }
    takeInput(arr, n, 0);

    int max = arr[0]; // Assume the first element as maximum initially
    int result = findMaxRecursive(arr, n, max);
    printf("The maximum number in the array is: %d\n", result);

    return 0;
}
