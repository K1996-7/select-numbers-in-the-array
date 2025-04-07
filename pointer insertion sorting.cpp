#include <iostream>
using namespace std;

void insertElement(int* arr, int& size, int position, int value) {
    for (int i = size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = value;

    size++;
}

int main() {
    int size, capacity;
    cout << "Enter the initial size of the array: ";
    cin >> size;

    capacity = size + 1; 
    int* arr = new int[capacity];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    int position, value;
    cout << "Enter the position (0-based index) to insert the element: ";
    cin >> position;
    cout << "Enter the value to insert: ";
    cin >> value;

    if (position < 0 || position > size) {
        cout << "Invalid position!\n";
    } else {
        insertElement(arr, size, position, value);

        cout << "Array after insertion:\n";
        for (int i = 0; i < size; i++) {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }

    delete[] arr; 
    return 0;
}