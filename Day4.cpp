#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int m, int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < m) {
        result[k++] = arr1[i++];
    }

    while (j < n) {
        result[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << std::endl;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int result[m + n];

    mergeArrays(arr1, m, arr2, n, result);
    printArray(result, m + n);
    return 0;
}
