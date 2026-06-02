/*
Selection Sort is a simple comparison-based sorting algorithm.
It works by repeatedly finding the minimum element from the unsorted part
of the array and placing it at the beginning.

Steps:
1. Divide the array into two parts: sorted and unsorted.
2. In each iteration, find the smallest element in the unsorted part.
3. Swap it with the first element of the unsorted part.
4. Repeat until the entire array is sorted.

Usage:
- Easy to implement and understand.
- Best used for small arrays or when simplicity is preferred.
- Time complexity: O(n^2), not efficient for large datasets.
*/

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
