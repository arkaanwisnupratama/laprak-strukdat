#include <iostream>
using namespace std;

void buatPiramidaTerbalikBintang(int n) {
    for (int i = n; i >= 1; i--) {
        for (int spasi = 0; spasi < (n - i); spasi++) {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        cout << "* ";
        
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
}

int main() {
    int angka;
    
    cout << "Input: ";
    cin >> angka;
    
    cout << "Output:" << endl;
    
    if (angka > 0) {
        buatPiramidaTerbalikBintang(angka);
    } else {
        cout << "Masukkan angka positif!" << endl;
    }
    
    return 0;
}