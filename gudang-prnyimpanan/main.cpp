#include "gudang.h"

int main() {
    gudang g;
    buat(g);

    ambil(g);

    masuk(g, "box 1");
    masuk(g, "box 2");
    masuk(g, "box 3");
    masuk(g, "box 4");
    masuk(g, "box 5");

    tampil(g);

    ambil(g);
    ambil(g);
    ambil(g);

    tampil(g);
}