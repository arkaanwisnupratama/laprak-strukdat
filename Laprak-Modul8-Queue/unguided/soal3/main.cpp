#include "queue.h"

int main() {
    Queue Q;
    
    cout << "=== ALTERNATIF 3: HEAD BERGERAK, TAIL DIAM (CIRCULAR) ===" << endl;
    cout << endl;
    
    createQueue(Q);
    
    cout << "Queue Info:" << endl;
    printInfo(Q);
    cout << endl;
    
    enqueue(Q, 5); printInfo(Q);
    enqueue(Q, 2); printInfo(Q);
    enqueue(Q, 7); printInfo(Q);
    cout << endl;
    
    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);
    cout << endl;
    
    enqueue(Q, 1); printInfo(Q);
    enqueue(Q, 9); printInfo(Q);
    enqueue(Q, 3); printInfo(Q);
    cout << endl;
    
    cout << "Coba enqueue lagi (harusnya penuh):" << endl;
    enqueue(Q, 8);
    cout << endl;
    
    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);
    cout << endl;
    
    cout << "Final Queue Info:" << endl;
    printInfo(Q);
    
    return 0;
}