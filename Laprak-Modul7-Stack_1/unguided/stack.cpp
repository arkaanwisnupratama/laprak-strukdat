#include "stack.h"
#include <iostream>
using namespace std;

void createStack(Stack &S) {
    S.top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == MAX - 1;
}

void push(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Stack penuh! Tidak bisa push " << x << endl;
    } else {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(Stack &S) {
    infotype x = -1;
    if (isEmpty(S)) {
        cout << "Stack kosong! Tidak bisa pop" << endl;
    } else {
        x = S.info[S.top];
        S.top--;
    }
    return x;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Isi stack (dari top ke bottom): ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i];
            if (i > 0) cout << " ";
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    if (!isEmpty(S)) {
        Stack temp;
        createStack(temp);
        
        while (!isEmpty(S)) {
            push(temp, pop(S));
        }
        
        S = temp;
    }
}

void pushAscending(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Stack penuh! Tidak bisa push " << x << endl;
        return;
    }
    
    if (isEmpty(S)) {
        push(S, x);
    } else {
        Stack temp;
        createStack(temp);
        
        while (!isEmpty(S) && S.info[S.top] > x) {
            push(temp, pop(S));
        }
        
        push(S, x);
        
        while (!isEmpty(temp)) {
            push(S, pop(temp));
        }
    }
}

void getInputStream(Stack &S) {
    cout << "Masukkan angka (ketik -1 untuk berhenti):" << endl;
    infotype x;
    
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        if (isFull(S)) {
            cout << "Stack penuh! Input dihentikan." << endl;
            break;
        }
        push(S, x);
    }
}