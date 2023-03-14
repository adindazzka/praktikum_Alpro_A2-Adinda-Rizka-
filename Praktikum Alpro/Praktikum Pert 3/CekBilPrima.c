/* Nama File    		: CekBilPrima.c */
/* Deskripsi    		: Menghitung dan menampilkan apakah sebuah bilangan integer sembarang N adalah sebuah bilangan prima atau bukan */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */	

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter */
    int faktor = 0; /* Faktor bilangan */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);

    if (N <= 0) {
        printf("N harus positif");
    } else {
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                faktor += 1;
            }
        }
    }

    if (faktor == 2) {
        printf("Bilangan prima");
    } else {
        printf("Bukan bilangan prima");
    }

    return 0;
}
