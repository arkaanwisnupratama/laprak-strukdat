#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Matriks Awal:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matriks[i][j], matriks[j][i]);
        }
    }
    
    cout << "\nMatriks Hasil Transpose:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}