/* Nama File    		: SimetriTabel.c */
/* Deskripsi            : Membandingkan 2 tabel apakah simetri atau tidak */
/* Pembuat      		: Adinda Rizka Hamdasati - 24060122140139 */
/* Tanggal Pembuatan	: 21 Maret 2023 */	

#include <stdio.h>
#include <stdlib.h>

int main(){

/* Kamus */
    int N; /* Panjang tabel 1 */
    int M; /* Panjang tabel 2 */
    int T1[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; /* Tabel 1 yang diinput */
    int T2[10] = {1, 4, 5, 7, 6, 5, 3, 5, 1, 4}; /* Tabel 2 yang diinput */
    int count; /* Menghitung jumlah anggota yang sama */
    int i; /* Counter */

/* Algoritma */
    N = 10;
    M = 10;
    if (N == M){
        count = 0;
        for (i = 0; i <= N; i++){
            if (T1[i] == T2[i]){
                count = count + 1;
            }
        }
       if (count == N){
        printf ("simetri");
       } 
       else{
        printf ("tidak simetri");
       }
    }
    else{
        printf ("tidak simetri");
    }
    return 0;
}