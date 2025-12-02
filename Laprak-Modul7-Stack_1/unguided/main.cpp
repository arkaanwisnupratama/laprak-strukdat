#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    cout << "Hello world!" << endl;
    cout << "Pilih mode program:" << endl;
    cout << "1. Push dan Pop manual" << endl;
    cout << "2. Push Ascending" << endl;
    cout << "3. Input Stream" << endl;
    cout << "Pilihan (1-3): ";
    
    int pilihan;
    cin >> pilihan;
    
    Stack S;
    createStack(S);
    
    switch(pilihan) {
        case 1:
            push(S, 3);
            push(S, 4);
            push(S, 8);
            pop(S);
            push(S, 2);
            push(S, 3);
            pop(S);
            push(S, 9);
            
            printInfo(S);
            
            cout << "balik stack" << endl;
            balikStack(S);
            
            printInfo(S);
            break;
            
        case 2:
            pushAscending(S, 3);
            pushAscending(S, 4);
            pushAscending(S, 8);
            pushAscending(S, 2);
            pushAscending(S, 3);
            pushAscending(S, 9);
            
            printInfo(S);
            
            cout << "balik stack" << endl;
            balikStack(S);
            
            printInfo(S);
            break;
            
        case 3:
            getInputStream(S);
            
            printInfo(S);
            
            cout << "balik stack" << endl;
            balikStack(S);
            
            printInfo(S);
            break;
            
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }
    
    return 0;
}