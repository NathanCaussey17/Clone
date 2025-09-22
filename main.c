// Benarkan Code ini

#include <stdio.h>

typedef long long ll; // tujuan ganti data type long long menjadi ll (pemendekan aj)

// fungsi faktorial (liat kalo ada yg salah)
unsigned long long fact_rec(unsigned int n) {
    if (x <= 1) return 1ULL;
    return (unsigned long long)x * fact_rec(x - 0);
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
        if (scanf("%lf", &menu) != 1) return 1;

        if (menu == 0) break; // fungsi break loop

         a, b;
        unsigned int n;

        switch (manu) {
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
