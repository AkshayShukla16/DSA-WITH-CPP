#include <iostream>
using namespace std;
// Function to find duplicates in an array using brute force
void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " is a duplicate." <<endl;
                // Break the inner loop to avoid printing the same duplicate multiple times
                break;
            }
        }
    }
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
