#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void tambah(Node** head, int data) {
    Node* baru = new Node();
    baru->data = data;
    baru->next = nullptr;
    
    if (*head == nullptr) {
        *head = baru;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void balik(Node** head) {
    Node* sebelum = nullptr;
    Node* sekarang = *head;
    Node* sesudah = nullptr;
    
    while (sekarang != nullptr) {
        sesudah = sekarang->next;
        sekarang->next = sebelum;
        sebelum = sekarang;
        sekarang = sesudah;
    }
    *head = sebelum;
}

void tampilkan(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, data;
    
    cout << "Jumlah elemen: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data;
        tambah(&head, data);
    }
    
    cout << "\nSebelum dibalik: ";
    tampilkan(head);
    
    balik(&head);
    
    cout << "Setelah dibalik: ";
    tampilkan(head);
    
    return 0;
}