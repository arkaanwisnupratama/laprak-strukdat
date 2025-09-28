#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;
    
    cout << "=== KALKULATOR SEDERHANA ===" << endl;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    
    cout << "\nHasil Operasi:" << endl;
    cout << bil1 << " + " << bil2 << " = " << (bil1 + bil2) << endl;
    cout << bil1 << " - " << bil2 << " = " << (bil1 - bil2) << endl;
    cout << bil1 << " * " << bil2 << " = " << (bil1 * bil2) << endl;
    
    if (bil2 != 0) {
        cout << bil1 << " / " << bil2 << " = " << (bil1 / bil2) << endl;
    } else {
        cout << bil1 << " / " << bil2 << " = Error (tidak bisa dibagi nol)" << endl;
    }
    
    return 0;
}