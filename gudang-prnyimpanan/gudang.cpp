#include "gudang.h"

void buat(gudang &g) {
    g.top = -1;
}

bool kosong(gudang g) {
    return g.top == -1;
}

bool penuh(gudang g) {
    return g.top == maks - 1;
}

void masuk(gudang &g, infotype kode) {
    if (penuh(g)) {
        cout << "gudang penuh" << endl;
    } else {
        g.top++;
        g.info[g.top] = kode;
    }
}

void ambil(gudang &g) {
    if (kosong(g)) {
        cout << "gudang kosong" << endl;
    } else {
        cout << "keluar" << g.info[g.top] << endl;
        g.top--;
    }
}

void tampil(gudang g) {
    cout << "isi gudang" << endl;
    if (kosong(g)) {
        cout << "kosong" << endl;
    } else {
        for (int i = g.top; i >= 0; i--) {
            cout << g.info[i];
            if (i == g.top)
            cout << "paling atas ";
            cout << endl;
        }
    }
}

