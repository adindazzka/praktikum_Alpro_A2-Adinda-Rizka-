/* Nama File    		: BilSempN.c */
/* Deskripsi    		: Menampilkan bilangan sempurna sampai bilangan N */
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
        printf("Bilangan sempurna sampai dengan bilangan %d =",N);
        for (i = 1; i <= N; i++) {
            faktor = 0;
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    faktor += j;
                }
            }
        if (faktor == i) {
            printf(" %d",i);
        }
        }
    }

    return 0;
}
