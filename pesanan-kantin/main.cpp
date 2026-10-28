#include "kantin.h"

int main() {
    antrian k;
    buat(k);

    cout << "sebelum antrian ditambah" << endl;
    tampil(k);

    cout << "menambahkan antrian/queue" << endl;
    tambah(k, alokasi(01, "naasi goreng"));
    tambah(k, alokasi(02, "naasi rames"));
    tambah(k, alokasi(03, "naasi padang"));
    tambah(k, alokasi(04, "naasi putih"));
    tambah(k, alokasi(05, "naasi beras hitam"));

    cout << "setelah antrian ditambah" << endl;
    tampil(k);

    cout << "keluar dari antrian/selesai/keluar dari queue" << endl;
    selesai(k);
    selesai(k);

    cout << "menampilkan antrian setelah 2 pesanan selesai" << endl;
    tampil(k);

    cout << "menambahkan antrian baru" << endl;
    tambah(k, alokasi(06, "nasi jinggo"));

    cout << "menampilkan antrian setelah ditambah 06" << endl;
    tampil(k);

    return 0;

}