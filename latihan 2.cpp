// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int jumlahlatihan, bataslatihan;
   string keanggotaan;
   
  cout << "Masukan jenis keanggotaan : ";
  cin >> keanggotaan;


  if (keanggotaan == "Silver"){
    bataslatihan = 10;
  }else if (keanggotaan == "Gold"){
    bataslatihan = 20;
  }else if (keanggotaan == "Platinum"){
    cout <<"Anda tidak memiliki batas "<<endl;
return 0;
}else{
    cout <<"Tidak Valid"<<endl;
}
  
  cout << "Masukan jumlah latihan yang dilakukan : ";
  cin >> jumlahlatihan;
if (jumlahlatihan < bataslatihan){
  cout << "Anda masih bisa latihan sebanyak : "<< bataslatihan - jumlahlatihan << " Kali lagi bilan ini"<<endl;

}else{
  cout <<"Anda sudah mencapai batas latihan bulan ini "<<endl;
}
 
 
    return 0;
}