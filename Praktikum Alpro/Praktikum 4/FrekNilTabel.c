/* Nama File    		: FrekNilTabel.c */
/* Deskripsi            : Menampilkan nilai frekuensi yang kemunculannya lebih dari sekali */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */
/* Tanggal Pembuatan	: 21 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>

int main(void){
/* Kamus */
  int N; /* Panjang tabel (10) */
  int count; /* Frekuensi */
  int i; /* Counter 1 */
  int j; /* Counter 2 */
  int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; /* Tabel yang diinput */

/* Algoritma */
  for (i = 0; i <= 10 ; i++) {
        count = 1 ;
        for (j = i + 1; j <= 10 ; j++) {
            if (T[i] == T[j] && T[i] != 0) {
                count = count + 1;
                T[j] = 0 ;
            }
        }
        if (count > 1) {
            printf ("%d " , T[i]) ;
        }
    }
    return 0 ;
}
