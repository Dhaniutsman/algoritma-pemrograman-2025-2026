#include <stdio.h>
#include <conio.h>

main(){
    int a =22;
    int b = 4;
    char c[26] = "Utsman Dhani ganteng abis";

    puts("Nama ");
    puts(c);
    printf("Terdiri dari %d huruf dan %d kata", a, b);
}

// Penjelasan singkat

//#include <stdio.h> = import library standar input output di C 
//printf = menampilkan teks
//scanf = input dari keyboard
//puts = mencetak string dengan newline (baris baru) otomatis

//#include <conio.h> = library untuk fungsi input/output di console (tidak dipakai di file ini)
//getch = tunggu input satu tombol dari user tanpa perlu enter
//clrscr = untuk membersihkan layar 

//main(){} = fungsi utama tempat semua program C dieksekusi dan berjalan

// int a = 11, int b =2, adalah nama variabel dan nilainya
// char c[26] = deklarasi array string (26 huruf) dengan nama Utsman Dhani ganteng abis (menyesuaikan banyak huruf pada nama)

//puts("Nama ") = menciptakan string Nama dan otomatis buat baris baru dibawahnya

//puts(c) = menampilkan nama Utsman Dhani ganteng abis sesuai dengan nama variabel char yang dibuat (c)

//("Terdiri dari %d huruf dan %d kata", a, b);
//%d = placeholder untuk interger 
//menampilkan teks d% sesuai dengan variabel
//%d pertama diganti dengan var a yang bernilai 22
//%d kedua diganti dengan var b yang bernilai 4



