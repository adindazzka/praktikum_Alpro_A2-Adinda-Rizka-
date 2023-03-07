/* Nama File    		: NoBulan.c */
/* Deskripsi    		: Menampilkan dan menginput bilangan i dari bilangan 1 sampai 12 merupakan nama-nama bulan */
/* Nama - NIM      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
//* Kamus *//
    int nomer;
//* Algoritma*//
    printf("masukkan nomer bulan: ");
    scanf("%d", &nomer);

    if (nomer >= 1 && nomer <= 12){
        if (nomer == 1){
            printf("januari");
        }
        else if (nomer == 2){
            printf ("februari");
        }
        else if (nomer == 3){
            printf ("maret");
        }
        else if (nomer == 4){
            printf ("april");
        }
        else if (nomer == 5){
            printf("mei");
        }
        else if (nomer == 6){
            printf ("juni");
        }
        else if (nomer == 7){
            printf("juli");
        }
        else if (nomer == 8){
            printf("agustus");
        }
        else if (nomer == 9){
            printf("september");
        }
        else if (nomer == 10){
            printf("oktober");
        }
        else if (nomer == 11){
            printf("november");
        }
        else{
            printf ("desember");
        }
    }
    else{
        printf ("bukan nomer bulan");
    }
}
