/* Nama File    		: sequentialSearching.c */
/* Deskripsi    		: Mencari dan menampilkan nilai data dari sebuah tabel */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */
/* Tanggal Pembuatan	: 16 Mei 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int *tabel; /* Tabel */
    int N; /* Panjang tabel */
    int X; /* Nilai yang dicari */
    int IX; /* Harga indeks dimana X ditemukan pertama kali */
    int i; /* Counter 1 */
    int j; /* Counter 2 */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai panjang tabel N = ");
    val = scanf("%d",&N);
    
    tabel = (int*)malloc(N * sizeof(int));

    for (i = 1; i <= N; i++) {
        printf("Masukkan nilai ke-%d = ",i);
        val = scanf("%d",&tabel[i]);
    }

    printf("Masukkan nilai yang dicari = ");
    val = scanf("%d",&X);

    j = 1;
    while (j <= N && tabel[j] != X) {
        j++;
    } 

    if (tabel[j] == X) {
        IX = j;
    } else {
        IX = 0;
    }

    printf("%d",IX);

    return 0;
}