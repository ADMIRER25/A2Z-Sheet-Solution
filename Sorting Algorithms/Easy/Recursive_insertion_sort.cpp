#include <iostream>
using namespace std;

// Recursive function to sort array[0..n-1] by building sorted array from the first element
void recursiveInsertionSort(int arr[], int n, int index = 1) {
    // Base case: If all elements are processed
    if (index == n)
        return;

    int key = arr[index];
    int j = index - 1;

    // Move elements of arr[0..index-1], that are greater than key, to one position ahead
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    // Recur for next element
    recursiveInsertionSort(arr, n, index + 1);
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveInsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}