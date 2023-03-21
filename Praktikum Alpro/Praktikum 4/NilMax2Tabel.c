/* Nama File    		: NilaiMax2Tabel.c */
/* Deskripsi            : Mnecari nilai terbesar kedua dari sebuah tabel */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */
/* Tanggal Pembuatan	: 21 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
    int N; /* Panjang tabel (10) */
    int i; /* Counter */
    int max1; /* nilai max 1 */
    int max2; /* nilai max 2 */
    int T[10] = {6,4,5,7,6,5,3,5,1,4}; /* Tabel yang diinputkan */

//Algoritma//
    max1 = 0;
    max2 = 0;
    for (i=1; i<=10; i++){
        if (T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }
        else if (T[i] > max2 && T[i] < max1){
            max2 = T[i];
        }
    }
    printf ("nilai terbesar kedua ialah: %d", max2);
    return 0;
}
