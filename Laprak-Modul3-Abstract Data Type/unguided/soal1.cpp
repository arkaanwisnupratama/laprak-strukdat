#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    Mahasiswa mhs[10];
    int jumlah = 0;
    int pilihan;
    
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            if (jumlah < 10) {
                cout << "\nMahasiswa ke-" << (jumlah + 1) << endl;
                
                cout << "Nama: ";
                cin.ignore();
                getline(cin, mhs[jumlah].nama);
                
                cout << "NIM: ";
                getline(cin, mhs[jumlah].nim);
                
                cout << "Nilai UTS: ";
                cin >> mhs[jumlah].uts;
                
                cout << "Nilai UAS: ";
                cin >> mhs[jumlah].uas;
                
                cout << "Nilai Tugas: ";
                cin >> mhs[jumlah].tugas;
                
                mhs[jumlah].nilaiAkhir = hitungNilaiAkhir(mhs[jumlah].uts, 
                                                          mhs[jumlah].uas, 
                                                          mhs[jumlah].tugas);
                
                cout << "Data tersimpan!\n";
                jumlah++;
            } else {
                cout << "Data penuh! (max 10)\n";
            }
        }
        
        else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "\nBelum ada data!\n";
            } else {
                cout << "\n--- DATA MAHASISWA ---\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << "\nMahasiswa ke-" << (i + 1) << endl;
                    cout << "Nama        : " << mhs[i].nama << endl;
                    cout << "NIM         : " << mhs[i].nim << endl;
                    cout << "UTS         : " << mhs[i].uts << endl;
                    cout << "UAS         : " << mhs[i].uas << endl;
                    cout << "Tugas       : " << mhs[i].tugas << endl;
                    cout << "Nilai Akhir : " << mhs[i].nilaiAkhir << endl;
                }
            }
        }
        
        else if (pilihan == 3) {
            cout << "\nProgram selesai!\n";
        }
        
        else {
            cout << "\nPilihan salah!\n";
        }
        
    } while (pilihan != 3);
    
    return 0;
}