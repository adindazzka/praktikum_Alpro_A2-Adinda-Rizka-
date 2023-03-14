/* Nama File    		: CekBilSemp.c */
/* Deskripsi    		: Menentukan dan menampilkan apakah sebuah bilangan integer sembarang N adalah bilangan sempurna atau bukan */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter */
    int faktor = 0; /* Faktor Bilangan */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);

    if (N <= 0) {
        printf("N harus positif");
    } else {
        for (i = 1; i < N; i++) {
            if (N % i == 0) {
                faktor += i;
            }
        }
    }

    if (faktor == N) {
        printf("Bilangan sempurna");
    } else {
        printf("Bukan bilangan sempurna");
    }

    return 0;
}
