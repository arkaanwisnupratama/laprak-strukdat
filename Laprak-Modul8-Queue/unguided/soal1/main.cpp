#include "queue.h"

int main() {
    Queue Q;
    
    cout << "Hello World!" << endl;
    cout << "=== ALTERNATIF 1: HEAD DIAM, TAIL BERGERAK ===" << endl;
    cout << endl;
    
    createQueue(Q);
    
    printInfo(Q);
    cout << endl;
    
    enqueue(Q, 5); 
    cout << "\nSetelah enqueue(5):" << endl;
    printInfo(Q);
    
    enqueue(Q, 2); 
    cout << "\nSetelah enqueue(2):" << endl;
    printInfo(Q);
    
    enqueue(Q, 7); 
    cout << "\nSetelah enqueue(7):" << endl;
    printInfo(Q);
    cout << endl;
    
    dequeue(Q); 
    cout << "\nSetelah dequeue():" << endl;
    printInfo(Q);
    
    dequeue(Q); 
    cout << "\nSetelah dequeue():" << endl;
    printInfo(Q);
    cout << endl;
    
    enqueue(Q, 1); 
    cout << "\nSetelah enqueue(1):" << endl;
    printInfo(Q);
    
    dequeue(Q); 
    cout << "\nSetelah dequeue():" << endl;
    printInfo(Q);
    
    dequeue(Q); 
    cout << "\nSetelah dequeue():" << endl;
    printInfo(Q);
    
    return 0;
}