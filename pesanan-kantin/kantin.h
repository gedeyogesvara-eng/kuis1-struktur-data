#ifndef KANTIN_H
#define KANTIN_H

#include <iostream>
#include <string>
using namespace std;

struct infotype {
    int nomer;
    string menu;
};

typedef struct elemen *address;

struct elemen {
    infotype info;
    address next;
};

struct antrian{
    address head;
    address tail;
};

void buat(antrian &q);
bool kosong(antrian q);
address alokasi(int nomer, string menu);
void tambah(antrian &q, address p);
void selesai(antrian &q);
void tampil(antrian q);

#endif