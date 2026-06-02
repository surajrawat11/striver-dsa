/*
Bubble Sort is a simple comparison-based sorting algorithm.
It repeatedly compares adjacent elements and swaps them
if they are in the wrong order.

How it works:
1. Traverse the array multiple times.
2. In each pass, push the largest element to the end.
3. Continue until no swaps are needed.

Usage:
- Very easy to implement and understand.
- Good for teaching basic sorting concepts.
- Time complexity: O(n^2), inefficient for large datasets.
*/

#include <bits/stdc++.h>
using namespace std;

class BubbleSort {
public:
    void bubble_sort(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {  //Use two nested loops to iterate over the array
            for (int j = 0; j <= i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]); //Swap arr[i] with arr[j+1]
                }
            }
        }
        cout << "After Using Bubble Sort:\n";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Bubble Sort:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    BubbleSort sorter;
    sorter.bubble_sort(arr);

    return 0;
}