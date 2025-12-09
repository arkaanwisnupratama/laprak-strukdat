#include "Doublylist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    address P;
    infotype data;
    
    createList(L);
    
    data.nopol = "D001";
    data.warna = "hitam";
    data.thnBuat = 80;
    P = alokasi(data);
    insertLast(L, P);
    
    data.nopol = "D002";
    data.warna = "putih";
    data.thnBuat = 70;
    P = alokasi(data);
    insertLast(L, P);
    
    data.nopol = "D003";
    data.warna = "merah";
    data.thnBuat = 90;
    P = alokasi(data);
    insertLast(L, P);
    
    data.nopol = "D004";
    data.warna = "kuning";
    data.thnBuat = 80;
    P = alokasi(data);
    insertLast(L, P);
    
    cout << "Masukkan nomer polisi: D001" << endl;
    cout << "Masukkan warna kendaraan: hitam" << endl;
    cout << "Masukkan tahun kendaraan: 80" << endl;
    cout << "\nMasukkan nomer polisi: D002" << endl;
    cout << "Masukkan warna kendaraan: putih" << endl;
    cout << "Masukkan tahun kendaraan: 70" << endl;
    cout << "\nMasukkan nomer polisi: D003" << endl;
    cout << "Masukkan warna kendaraan: merah" << endl;
    cout << "Masukkan tahun kendaraan: 90" << endl;
    cout << "\nMasukkan nomer polisi: D004" << endl;
    cout << "Masukkan warna kendaraan: kuning" << endl;
    cout << "Masukkan tahun kendaraan: 80" << endl;
    cout << "\nnomor polisi sudah terurut" << endl;
    
    printInfo(L);
    
    cout << "\n\n=== Mencari Nomor Polisi D001 ===" << endl;
    data.nopol = "D001";
    P = findElm(L, data);
    if (P != NULL) {
        cout << "\nNomor Polisi\t: " << P->info.nopol << endl;
        cout << "Warna\t\t: " << P->info.warna << endl;
        cout << "Tahun\t\t: " << P->info.thnBuat << endl;
    }
    
    cout << "\n\n=== Menghapus Nomor Polisi D003 ===" << endl;
    data.nopol = "D003";
    P = findElm(L, data);
    if (P != NULL) {
        cout << "Data dengan nomor polisi D003 akan dihapus" << endl;
        cout << "Data sebelumnya:" << endl;
        printInfo(L);
        
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(P->prev, P);
        }
        dealokasi(P);
        
        cout << "\nSetelah penghapusan:" << endl;
        printInfo(L);
    }
    
    return 0;
}