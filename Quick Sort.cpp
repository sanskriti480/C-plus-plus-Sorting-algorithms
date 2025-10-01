//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 21

#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};

    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}

/*
Sample Output : 
11    12    22    25    64
*/
