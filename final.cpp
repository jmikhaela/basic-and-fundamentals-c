

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int MAX_SIZE = 10; // Maximum size for each array
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArray[2 * MAX_SIZE];
    int size1, size2, mergedSize;

    // Input size of the first array
    cout << "Enter the number of elements for the first array (1-10): ";
    cin >> size1;
    if (size1 < 1 || size1 > MAX_SIZE) {
        cout << "Invalid size! Must be between 1 and 10.\n";
        return 1;
    }

    // Input elements of the first array
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input size of the second array
    cout << "Enter the number of elements for the second array (1-10): ";
    cin >> size2;
    if (size2 < 1 || size2 > MAX_SIZE) {
        cout << "Invalid size! Must be between 1 and 10.\n";
        return 1;
    }

    // Input elements of the second array
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Merging the two arrays
    mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Sorting the merged array in descending order
    sort(mergedArray, mergedArray + mergedSize, greater<int>());

    // Display the merged and sorted array
    cout << "Merged array in descending order: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
