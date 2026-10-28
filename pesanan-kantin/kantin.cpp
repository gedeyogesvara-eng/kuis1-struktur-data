#include "kantin.h"

void buat(antrian &q) {
    q.head = NULL;
    q.tail = NULL;
}

bool kosong(antrian q) {
    return q.head == NULL;
}

address alokasi(int nomer, string menu) {
    address p = new elemen;
    p->info.nomer = nomer;
    p->info.menu = menu;
    p->next = NULL;
    return p;
}

void tambah(antrian &q, address p) {
    if (kosong(q)) {
        q.head = p;
        q.tail = p;
    } else {
        q.tail->next = p;
        q.tail = p;
    }
    cout << "masuk" << p->info.nomer << " " << p->info.menu << endl;
}

void selesai(antrian &q) {
    if (kosong(q)) {
        cout << "antrian kosong" << endl;
    } else {
        address p = q.head;
        cout << "selesai" << p->info.nomer << " " << p->info.menu << endl;
        q.head = q.head -> next;
        if (q.head == NULL) {
        q.tail = NULL;
    }
    delete p;
    }
}

void tampil(antrian q) {
    cout << "daftar tunggu" << endl;
    address p = q.head;
    while (p != NULL) {
        cout << p-> info.nomer << " " << p->info.menu << endl;
        if (p == q.head) 
        cout  << "sedang dimasak" << endl;
        if (p == q.tail) 
        cout << "terakhir" << endl;

        cout <<endl;
        p = p -> next;
    }
}

