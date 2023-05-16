/* Nama File    		: ascendingSorting.c */
/* Deskripsi    		: Mengurutkan dan menampilkan tabel yang terurut secara ascending */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */
/* Tanggal Pembuatan	: 16 Mei 2023 */		

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int *tabel; /* Tabel */
    int N; /* Panjang tabel */
    int temp; /* Memorisasi harga untuk penukaran */
    int i = 0; /* Counter 1 */
    int j = 0; /* Counter 2 */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai panjang tabel N = ");
    val = scanf("%d",&N);
    
    tabel = (int*)malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        printf("Masukkan nilai ke-%d = ",i);
        val = scanf("%d",&tabel[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (tabel[j] > tabel[j + 1]) {
                temp = tabel[j];
                tabel[j] = tabel[j+1];
                tabel[j+1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d ",tabel[i]);
    }
}