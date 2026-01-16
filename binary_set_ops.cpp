#include <iostream>
#include <vector>

using namespace std;

// Function for Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Returns index of the found element
        }
    }
    return -1; // Returns -1 if not found
}

// "Insertious" set logic (Insertion Sort)
// This ensures the set is ordered for binary-style operations
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    // Initial unsorted set
    int mySet[] = {15, 3, 9, 1, 7};
    int n = 5;
    int target = 9;

    cout << "Original Binary Set: 15, 3, 9, 1, 7" << endl;

    // 1. Implementation of Insertion Sort
    insertionSort(mySet, n);
    
    cout << "Sorted Set (after Insertion): ";
    for(int i = 0; i < n; i++) cout << mySet[i] << " ";
    cout << endl;

    // 2. Implementation of Linear Search
    int index = linearSearch(mySet, n, target);
    
    if(index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
