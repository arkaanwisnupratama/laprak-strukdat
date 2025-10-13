#include "pelajaran.h"
#include <iostream>
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaPel = namapel;
    pel.kodePel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama pelajaran : " << pel.namaPel << endl;
    cout << "Nilai : " << pel.kodePel << endl;
}