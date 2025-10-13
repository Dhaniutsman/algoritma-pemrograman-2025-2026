#include <stdio.h>


main(){
char nm1[50];
char nm2[50];

puts("Masukkan nama pertama :"); gets(nm1);
printf("Masukkan nama kedua :"); gets(nm2);

printf("\n\n");

puts("Selamat Datang"); puts(nm1);
printf("Selamat Datang %s", nm2);


}


//Catatan singkat
//gets(nm1) = mengambil input dari user dan menyimpannya dalam variabel nm1
//%s = %s digunakan untuk mencetak string


//saya dapat warning BUFFER OVERFLOW ketika compile:

//coba2.cpp: In function 'int main()':
// coba2.cpp:8:38: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
//     8 | puts("Masukkan nama pertama :"); gets(nm1);
//       |                                  ~~~~^~~~~
// coba2.cpp:9:38: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
//     9 | printf("Masukkan nama kedua :"); gets(nm2);

//gets = mengambil input string dari user dan menyimpannya ke variabel nm1
//[50] = batas array maksimal adalah 49 huruf, huruf terakhir merupakan null terminator atau \0, yaitu fungsi untuk mengakhiri bites

//Istilah2 penting:
//Stack = menyimpan variabel lokal. Saat fungsi selesai, stack akan dibersihkan. 
//Buffer = tempat (array) menampung data
//overflow = menulis data lebih dari kapasitas, misal kapasitas maksimal adalah[50], tapi kita menulis lebih (menimpa buffer lain)

//intinya adalah fungsi gets tidak mengenali batasan buffer, dan rawan overflow

//rekomendasi fungsi yang lebih aman:
//scanf("%s, nm1"), aman jika dibatasi panjang array >>scanf("%49s, nm1"), tapi berhenti di spasi (tidak cocok untuk nama yg pakai spasi)
//fgets(buf, sizeof buf, stdin) → direkomendasikan: kamu beritahu ukuran buffer, dan fgets tidak akan menulis lebih dari itu. Namun fgets biasanya menyertakan karakter newline \n di akhir.
//stdin = standar input
//sizeof = mengetahui ukuran tipe data 
//getline() = baca seluruh baris dengan alokasi otomatis (bagus jika input sangat panjang), tapi tidak portable ke semua sistem tanpa tambahan.


//Note = catatan diatas adalah catatan pribadi saya tentang error apa saja yang terjadi ketika saya coding disini