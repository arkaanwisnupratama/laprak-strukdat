#include "queue.h"

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.head == -1 && Q.tail == -1);
}

bool isFullQueue(Queue Q) {
    return ((Q.tail + 1) % 5 == Q.head);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail = (Q.tail + 1) % 5;
        }
        Q.info[Q.tail] = x;
    }
}

void dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
    } else {
        if (Q.head == Q.tail) {
            Q.head = -1;
            Q.tail = -1;
        } else {
            Q.head = (Q.head + 1) % 5;
        }
    }
}

void printInfo(Queue Q) {
    cout << "H = " << Q.head << " \t| Queue Info" << endl;
    cout << "T = " << Q.tail << " \t|" << endl;
    cout << "----------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Q[" << i << "] = ";
        if (isEmptyQueue(Q)) {
            cout << "-1\t| empty queue";
        } else {
            bool hasData = false;
            int idx = Q.head;
            while (true) {
                if (idx == i) {
                    hasData = true;
                    break;
                }
                if (idx == Q.tail) break;
                idx = (idx + 1) % 5;
            }
            
            if (hasData) {
                cout << Q.info[i] << "\t| " << Q.info[i];
            } else {
                cout << "-1\t|";
            }
        }
        cout << endl;
    }
}