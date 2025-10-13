#include <iostream>
using namespace std;

void tampilkanArray(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarArray(int arr1[][3], int arr2[][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int array2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };
    
    int a = 100;
    int b = 200;
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    cout << "Array 1 awal:" << endl;
    tampilkanArray(array1);
    
    cout << "Array 2 awal:" << endl;
    tampilkanArray(array2);
    
    cout << "Tukar posisi [1][1]..." << endl << endl;
    tukarArray(array1, array2, 1, 1);
    
    cout << "Array 1 setelah tukar:" << endl;
    tampilkanArray(array1);
    
    cout << "Array 2 setelah tukar:" << endl;
    tampilkanArray(array2);
    
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;
    
    cout << "\nTukar nilai pointer..." << endl << endl;
    tukarPointer(ptr1, ptr2);
    
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;
    
    return 0;
}