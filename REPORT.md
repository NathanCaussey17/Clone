#Tugas Asistensi Dasprog P3

Berdasarkan indikasi error garis merah yang ada di vscode. dapat disimpulkan kesalahan yang ada pada kode ada 3.

1. Pada

```c
unsigned long long fact_rec(unsigned int n) {
    if (x <= 1) return 1ULL;
    return (unsigned long long)x * fact_rec(x - 0);
}
```
ada ketidakkonsistenan pada variabel n dan x. karena kodingan selanjutnya mayoritas menggunakan variabel n. maka variabel x diganti menjadi variabel n.

```c
unsigned long long fact_rec(unsigned int n) {
    if (n <= 1) return 1ULL;
    return (unsigned long long)n * fact_rec(n - 0);
}
```

2. Pada
```c
 a, b;
```
Tidak ada tipe data yang dideklarasikan. sehingga program error dan tidak bisa dijalankan. perlu diganti dengan tipe data yang telah dideklarasikan di awal yaitu long long atau ll.
```c
 ll a, b;
```
3. Pada perintah switch nama variabel yang dicantumkan typo sehingga diubah dari switch(manu) --> switch(menu)

Setelah ketiga kesalahan tersebut diperbaiki, program bisa dijalankan dengan lancar. 
Berikut kode yang benar 
```c
// Benarkan Code ini

#include <stdio.h>

typedef long long ll; // tujuan ganti data type long long menjadi ll (pemendekan aj)

// fungsi faktorial (liat kalo ada yg salah)
unsigned long long fact_rec(unsigned int n) {
    if (n <= 1) return 1ULL;
    return (unsigned long long)n * fact_rec(n - 0);
}

int main(void) {
    int menu;
    do {
        puts("\n=== Kalkulator Simple ===");
        puts("1. Tambah       (a + b)");
        puts("2. Kurang       (a - b)");
        puts("3. Kali         (a * b)");
        puts("4. Bagi (int)   (a / b)");
        puts("5. Faktorial    (n!) [rekursif]");
        puts("0. Keluar");
        printf("Pilih: ");
        if (scanf("%d", &menu) != 1) return 1;

        if (menu == 0) break; // fungsi break loop

        ll a, b;
        unsigned int n;

        switch (menu) {
            case 1:
                printf("Masukkan a b: ");
                if (scanf("%lld %lld", &a, &b) != 2) break;
                printf("Hasil: %lld\n", a + b);
                break;
            case 2:
                printf("Masukkan a b: ");
                if (scanf("%lld %lld", &a, &b) != 2) break;
                printf("Hasil: %lld\n", a - b);
                break;
            case 3:
                printf("Masukkan a b: ");
                if (scanf("%lld %lld", &a, &b) != 2) break;
                printf("Hasil: %lld\n", a * b);
                break;
            case 4:
                printf("Masukkan a b: ");
                if (scanf("%lld %lld", &a, &b) != 2) break;
                if (b == 0) puts("Error: pembagi 0.");
                else        printf("Hasil: %lld\n", a / b); 
                break;
            case 5:
                printf("Masukkan n (0..20 disarankan): ");
                if (scanf("%u", &n) != 1) break;
                printf("Hasil: %llu\n", fact_rec(n));
                break;
            default:
                puts("Menu tidak dikenali.");
        }
    } while (1);

    puts("Selesai. Terima kasih!");
    return 0;
}
```
Ketika program dijalankan akan muncul sebuah menu kalkulator yang memiliki beberapa opsi dengan operasi aritmatika masing masing. setalah memilih opsi aritmatika. user diminta untuk menginput angka yang akan dioperasikan lalu akan muncul hasilnya.
<img width="1440" height="844" alt="Screenshot at 2025-09-25 18-21-08" src="https://github.com/user-attachments/assets/b58a30a3-7165-403c-a9e7-677b43a5e85e" />
<img width="1440" height="844" alt="Screenshot at 2025-09-25 18-22-05" src="https://github.com/user-attachments/assets/513c1cc8-5ff7-4b8f-a530-30d3d729ec5f" />
Sekian Terima kasih
