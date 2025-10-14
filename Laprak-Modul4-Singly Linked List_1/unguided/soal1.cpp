#include <iostream>
#include <string>
using namespace std;

struct Pembeli {
    string nama;
    string pesanan;
    Pembeli* next;
};

Pembeli* depan = NULL;
Pembeli* belakang = NULL;

void tambahAntrian() {
    Pembeli* baru = new Pembeli();
    
    cout << "\nNama: ";
    getline(cin, baru->nama);
    cout << "Pesanan: ";
    getline(cin, baru->pesanan);
    baru->next = NULL;
    
    if (depan == NULL) {
        depan = belakang = baru;
    } else {
        belakang->next = baru;
        belakang = baru;
    }
    
    cout << "✓ Berhasil ditambahkan!\n";
}

void layaniAntrian() {
    if (depan == NULL) {
        cout << "\n✗ Antrian kosong!\n";
        return;
    }
    
    cout << "\n=== MELAYANI ===\n";
    cout << "Nama: " << depan->nama << endl;
    cout << "Pesanan: " << depan->pesanan << endl;
    
    Pembeli* temp = depan;
    depan = depan->next;
    
    if (depan == NULL) {
        belakang = NULL;
    }
    
    delete temp;
    cout << "✓ Selesai dilayani!\n";
}

void tampilkanAntrian() {
    if (depan == NULL) {
        cout << "\n✗ Antrian kosong!\n";
        return;
    }
    
    cout << "\n===== ANTRIAN =====\n";
    Pembeli* sekarang = depan;
    int nomor = 1;
    
    while (sekarang != NULL) {
        cout << nomor << ". " << sekarang->nama;
        cout << " - " << sekarang->pesanan << endl;
        sekarang = sekarang->next;
        nomor++;
    }
    cout << "===================\n";
}

int main() {
    int pilih;
    
    do {
        cout << "\n=== ANTRIAN PEMBELI ===\n";
        cout << "1. Tambah Antrian\n";
        cout << "2. Layani Antrian\n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();
        
        if (pilih == 1) {
            tambahAntrian();
        } else if (pilih == 2) {
            layaniAntrian();
        } else if (pilih == 3) {
            tampilkanAntrian();
        } else if (pilih == 4) {
            cout << "\nTerima kasih!\n";
        } else {
            cout << "\n✗ Pilihan salah!\n";
        }
        
    } while (pilih != 4);
    
    return 0;
}