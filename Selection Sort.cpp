//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 21

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}


/*
Sample Output : 
11    12    22    25    64
*/
