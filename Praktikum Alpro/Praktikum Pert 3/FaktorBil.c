/* Nama File    		: FaktorBil.c */
/* Deskripsi    		: Menentukan dan menampilkan faktor bilangan yang dapat dibentuk oleh bilangan N */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int N; /* Bilangan bulat positif */
    int i; /* Counter */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);

    if (N <= 0) {
        printf("N harus positif");
    } else {
        printf("Faktor bilangan %d =",N);
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf(" %d",i);
            }
        }
    }

    return 0;
}
