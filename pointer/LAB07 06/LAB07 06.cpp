#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
}

void swapValue(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(p + j) < *(p + j + 1)) {
                swapValue((p + j), (p + j + 1));
            }
        }
    }
}


int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

    printArray(arr, size);
    cout << "\n";
    sortDescending(arr, size);
    cout << "\n";
    printArray(arr, size);

    return 0;
}