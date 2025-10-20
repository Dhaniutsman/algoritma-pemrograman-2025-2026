#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{

char a[30] = "---BELAJAR TIPE DATA---";
short b;
int c;
long d;
float e;
double f;
int g = 1;
int h =2;

b = 10000;
c = 8981921;
d = 69696969;
e = 3.12;
f = 3.12345;

cout<<a<<endl;
cout<<"Tipe data short :"<<b<<endl;
cout<<"Tipe data int :"<<c<<endl;
cout<<"Tipe data long :"<<d<<endl;
cout<<"Tipe data float :"<<e<<endl;
cout<<"Tipe data double :"<<f<<endl;
cout<<endl;

//deklarasi perhitungan
cout<<"Berikut hasil Boolean :"<<endl;
cout<<(g>h);    //g lebih besar dari h
cout<<endl;
cout<<(g<h);    //g lebih kecil dari h
cout<<endl;
cout<<(g==h);   //g sama dengan h
cout<<endl;     
cout<<(g!= h); //g tidak sama dengan h
cout<<endl;
}