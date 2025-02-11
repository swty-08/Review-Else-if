#include <iostream>
#include <cmath>
using namespace std;
int main(){
int sisi, hasil, pilihan, r, t;
cout<<"======== Menu Pilihan ========\n\n";
cout<<"1. Menghitung Volume Kubus\n2. Menghitung Luas Lingkaran\n3. Menghitung Volume Silinder \n\n";
cout<<"Masukan Pilihan Menu : ";
cin>>pilihan;

switch(pilihan){
    case 1 :
    cout<<"\n== Menghitung Volume Kubus ==\n";
    cout<<"Masukan Panjang Sisi Kubus : ";
    cin>>sisi;
    hasil = pow(sisi,3);
    cout<<"Volume Kubus adalah "<<hasil<<endl;
    break;
    case 2 : 
     cout<<"== Menghitung Luas Lingkaran ==\n";
    cout<<"Masukan Panjang Jari-jari Lingaran : ";
    cin>>r;
    hasil = 3.14*r*r;
    cout<<"Luas Lingkaran adalah "<<hasil<<endl;
    break;
    case 3 :
     cout<<"== Menghitung Volume Silinder ==\n";
    cout<<"Masukan Panjang Jari-jari Lingaran : ";
    cin>>r;
    cout<<"Masukan Panjang Tinggi Silinder    : ";
    cin>>t;
    hasil = 3.14*r*r*t;
    cout<<"Luas Lingkaran adalah "<<hasil<<endl;
    break;
    default:
       cout<<"Pilihan Tidak Valid";
}
    return 0;
}