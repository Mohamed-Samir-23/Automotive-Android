#include <iostream>
using namespace std;

struct vector {
    int* arr;
    int size;
    int capacity;
};

void init(vector& vec, int size, int capacity) {
    vec.size = size;
    vec.capacity = capacity;
    vec.arr = new int[capacity];

    for (int i = 0; i < size; i++) {
        cout << "Enter element number " << i << ": ";
        cin >> vec.arr[i];
    }
    cout << "Initialization done" << endl;
}

void print(const vector& vec) {
    cout << "Array contents: ";
    for (int i = 0; i < vec.size; i++) {
        cout << vec.arr[i] << " ";
    }
    cout << endl;
}

void insert(vector& vec, int index, int value) {
    if (vec.size >= vec.capacity) {
        cout << "full capacity to insert!" << endl;
        vec.capacity *= 2;
    }

    for (int i = vec.size; i > index; i--) {
        vec.arr[i] = vec.arr[i - 1];
    }
    vec.arr[index] = value;
    vec.size++;
}

void remove(vector& vec, int index) {
    for (int i = index; i < vec.size - 1; i++) {
        vec.arr[i] = vec.arr[i + 1];
    }
    vec.size--;
}

int main() {
    int size;
    int index;
    int value;

    cout << "Enter size: ";
    cin >> size;
    int capacity = size ;

    vector vec;
    init(vec, size, capacity);
    print(vec);

    cout << "Enter the index to insert: ";
    cin >> index;
    cout << "Enter the value to insert: ";
    cin >> value;
    insert(vec, index, value);
    print(vec);

    cout << "Enter the index to delete: ";
    cin >> index;
    remove(vec, index);
    print(vec);

    delete[] vec.arr;
    return 0;
}
