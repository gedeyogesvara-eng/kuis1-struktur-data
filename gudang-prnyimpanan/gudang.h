#ifndef GUDANG_H
#define GUDANG_h

#include <iostream>
#include <string>
using namespace std;

const int maks = 10;
typedef string infotype;

struct gudang {
    infotype info[maks];
    int top;
};

void buat(gudang &g);
bool kosong(gudang g);
bool penuh(gudang g);
void masuk(gudang &g, infotype kode);
void ambil(gudang &g);
void tampil(gudang g);

#endif