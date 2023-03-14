/* Nama File    		: BilPrimaN.c */
/* Deskripsi    		: Menampilkan bilangan prima sampai bilangan sembarang N */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */	

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter 1 */
    int j; /* Counter 2 */
    int faktor; /* Faktor bilangan */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);

    if (N <= 0) {
        printf("N harus positif");
    } else {
        printf("Bilangan prima sampai dengan bilangan %d =", N);
        for (i = 1; i <= N; i++) {
            faktor = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    faktor += 1;
                }
            }
        if (faktor == 2) {
            printf(" %d",i);
        }
        }
    }

    return 0;
}
