#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Masukkan angka pertama :";
    cin>>a;
    cout<<"Masukkan angka kedua :";
    cin>>b;

    if (a>b)
    cout<<a<<"Lebih besar dari "<<b<<endl;
    else if (a<b)
    cout<<a<<"Lebih kecil dari "<<b<<endl;
    else
    cout<<"Nilai keduanya sama"<<endl;

    cout<<"Apakah keduanya sama?"<<(a==b);
    

}