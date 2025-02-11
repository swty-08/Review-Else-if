// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   string warna;
   cout << "Masukan warna lampu : ";
   cin>>warna;
   if (warna == "merah"){
       cout <<"Berhenti!";
   }else if (warna == "kuning"){
       cout <<"Hati-hati!";
   }else if (warna == "hijau"){
       cout <<"Jalan!";
   }else{
       cout <<"Tidak Valid !";
   }
   
   
   
    return 0;
}