#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;  // Target element not found
}

int main() {
    int arr[] = {13, 3, 9, 5, 1, 11, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    int target = 7;
    int index = binarySearch(arr, size, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}
