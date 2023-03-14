/* Nama File    		: JumDeret.c */
/* Deskripsi    		: Menghitung dan menampilkan faktor bilangan yang dapat dibentuk oleh bilangan N */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter */
    int jumlah = 0; /* Jumlah total deret */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);

    if (N <= 0) {
        printf("N harus positif");
    } else {
        for (i = 1; i <= N; i++) {
            jumlah += i;
        }
        printf("Jumlah total deret = %d",jumlah);
    }

    return 0;
}
