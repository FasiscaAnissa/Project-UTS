#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("color 74");
    int pilihan;

    printf ("--------------------------------------------------------------------------------\n");
    printf ("-------------KEBUTUHAN WAKTU TIDUR SECARA IDEAL MENURUT USIA--------------------\n");
    printf ("----------------YUK TIDUR YANG CUKUP DAN BERKUALITAS !!!------------------------\n");
    printf ("--------------------------------------------------------------------------------\n");
    printf ("1. Usia 0-1 Bulan \n");
    printf ("2. Usia 1-18 Bulan \n");
    printf ("3. Usia 18 Bulan-3 Tahun\n");
    printf ("4. Usia 3-6 Tahun \n");
    printf ("5. Usia 6-12 Tahun \n");
    printf ("6. Usia 12-18 Tahun \n");
    printf ("7. Usia 18-40 Tahun \n");
    printf ("8. Usia 40-60 Tahun \n");
    printf ("9. Usia >60 Tahun \n");
    printf ("Masukkan Usia Pilihan (1/2/3/4/5/6/) : ");
    scanf ("%d", &pilihan);

    switch (pilihan)
    {
        case 1 :
            printf (" \n - Anda Berada pada Masa Neonates          \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 14-18 Jam/hari \n");
            break;
        case 2 :
            printf (" \n - Anda Berada pada Masa Bayi               \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 12-14 Jam/hari \n");
            break;
        case 3 :
            printf (" \n - Anda Berada pada Masa Anak              \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 11-12 Jam/hari \n");
            break;
        case 4 :
            printf (" \n  -Anda Berada pada Masa Prasekolah         \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal  11 Jam/hari \n");
            break;
        case 5 :
            printf (" \n - Anda Berada pada Masa Sekolah            \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 10 Jam/hari \n");
            break;
        case 6 :
            printf (" \n - Anda Berada pada Masa Remaja             \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 8,5 Jam/hari \n");
            break;
        case 7 :
            printf (" \n - Anda Berada pada Masa Dewasa Muda        \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 7-8 Jam/hari \n");
            break;
        case 8 :
            printf (" \n - Anda Berada pada Masa Paruh Baya         \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 7 Jam/hari \n");
            break;
        case 9 :
            printf (" \n - Anda Berada pada Masa Dewasa Tua        \n");
            printf (" \n - Memiliki Jumlah Kebutuhan Tidur Secara Ideal 6 Jam/hari \n ");
            break;

        default : printf ("Maaf, Angka yang Anda pilih Tidak Tersedia\n\n\n");break;
    }


}

