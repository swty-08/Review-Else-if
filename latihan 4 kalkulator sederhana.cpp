#include <iostream>
using namespace std;
int main(){
int bil1, bil2, pilihan;

cout<<"====== Kalkulator Sederhana ======" <<endl;
cout<<"Masukan bilangan pertma : ";
cin>>bil1;
cout<<"Masukan bilangan Kedua  : ";
cin>>bil2;
cout<<"======== Menu Matematika ========\n\n";
cout<<"1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian \n\n";
cout<<"Masukan pilihan menu : ";
cin>>pilihan;


if(pilihan == 1){
    cout<<"Hasi Penjumlahan "<<bil1<< " + " <<bil2<< " Adalah " <<bil1+bil2<<endl;
}else if(pilihan == 2){
    cout<<"Hasil Pengurangan "<<bil1<< " - " <<bil2<< " Adalah " <<bil1-bil2<<endl;
}else if(pilihan == 3){
    cout<<"Hasil Pembagian "<<bil1<< " / " <<bil2<< " adalah " <<bil1/bil2<<endl;
}else if(pilihan == 4){
    cout<<"Hasil Perkalian "<<bil1<< " * " <<bil2<< " Adalah " <<bil1*bil2<<endl;
}else{
    cout<<"Pilihan Tidak Valid";
}

    return 0;
}