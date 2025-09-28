#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka;
    
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    
    if (angka < 0 || angka > 100) {
        cout << "Error: Angka harus dalam rentang 0-100" << endl;
        return 1;
    }
    
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", 
                       "enam", "tujuh", "delapan", "sembilan"};
    
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", 
                        "empat belas", "lima belas", "enam belas", 
                        "tujuh belas", "delapan belas", "sembilan belas"};
    
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", 
                        "lima puluh", "enam puluh", "tujuh puluh", 
                        "delapan puluh", "sembilan puluh"};
    
    cout << angka << ": ";
    
    if (angka == 0) {
        cout << "nol";
    }
    else if (angka == 100) {
        cout << "seratus";
    }
    else if (angka < 10) {
        cout << satuan[angka];
    }
    else if (angka < 20) {
        cout << belasan[angka - 10];
    }
    else {
        cout << puluhan[angka / 10];
        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }
    }
    
    cout << endl;
    return 0;
}