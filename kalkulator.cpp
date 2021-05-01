// Kepala (Header) Bagian C++
#include <math.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <conio.h>
using namespace std;
int pilihan();
int Qwerty(){
cout<<"\t-----------------------------------------------------------"<<endl;
}
//Operasi Input & Output Operator C++
//1. Penjumlahan (+)
int penjumlahan(){
int bil1, bil2, hasil;
    cout<<"\n1. Operasi Penjumlahan (+)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 + bil2;
    cout<<"   Hasil dari "<<bil1<<" + "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//2. pengurangan (-)
int pengurangan(){
int bil1, bil2, hasil; 
    cout<<"\n2. Operasi Pengurangan (-)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 - bil2;
    cout<<"   Hasil dari "<<bil1<<" - "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//3. Perkalian (*)
int perkalian(){
int bil1, bil2, hasil;
    cout<<"\n3. Operasi Perkalian   (*)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 - bil2;
    cout<<"   Hasil dari "<<bil1<<" * "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//4. Pembagian (/)
int pembagian(){
int bil1, bil2, hasil;
    cout<<"\n4. Operasi Pembagian   (/)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 + bil2;
    cout<<"   Hasil dari "<<bil1<<" / "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//5. Dimodulus (%)
int mod(){
int bil1, bil2, hasil;
    cout<<"\n5. Operasi Modulus (%)"<<endl;
    cout<<"   Masukkan Bilangan Pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan Kedua   : ";   cin>>bil2;
    hasil = bil1 % bil2;
    cout<<"   Hasil dari "<<bil1<<" % "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//6. Perpangkatan 2 [auto](**)
int pangkat2(){
float bil, hasil;
    cout<<"\n6. Operasi Pangkat 2 (**)"<<endl;
    cout<<"   Masukkan bilangan : "; cin>>bil;
    hasil = bil * bil;
    cout<<"  Hasil dari "<<bil<<" pangkat 2 = "<<hasil<<endl;
pilihan();
}
//7. Perpangkatan 3 [auto](***)
int pangkat3(){
float bil, hasil;
    cout<<"\n7. Operasi Pangkat 3 (***)"<<endl;
    cout<<"   Masukkan bilangan : "; cin>>bil;
    hasil = bil * bil * bil;
    cout<<"  Hasil dari "<<bil<<" pangkat 3 = "<<hasil<<endl;
pilihan();
}
//8. Perpangkatan Manual (bil1^bil2)
int pangkatm(){
    double bil1, bil2, hasil;
    cout<<"\n8. Operasi Perpangkatan Manual (pow)"<<endl;
    cout<<"    Masukan angka pertama : "; cin>>bil1;
    cout<<"    Masukan angka pangkat : "; cin>>bil2;
    hasil = pow(bil1, bil2);
    cout<<"    Hasil dari Pangkat manual : "<<bil1<<" ^ "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//9. Sinus ()
int sinus(){
  double bil, hasil;
  cout<<"\n9. Operasi Sinus"<<endl;
  cout<<"   Masukan nilai sinus : "; cin>>bil;
  hasil = sin(bil);
  cout<<"    Hasil Dari Sinus : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//10. Cosinus ()
int cosinus(){
  double bil, hasil;
  cout<<"\n10. Operasi Cosinus"<<endl;
  cout<<"   Masukan nilai cosinus : "; cin>>bil;
  hasil = cos(bil);
  cout<<"   Hasil Dari Cosinus : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//11. Tangen ()
int tangen(){
  double bil, hasil;
  cout<<"\n11. Operasi Tangen"<<endl;
  cout<<"    Masukan nilai tangen"; cin>>bil;
  hasil = tan(bil);
  cout<<"    Hasil Dari Tangen : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//49. Informasi Data Developer & How to use this program
int info(){
    cout<<"\n49. Informasi Developer & Cara penggunaan\n\n";
    cout<<"Nama Pembuat   : Aldi Ananda Prasetya"<<endl;
    cout<<"Tempat Tinggal : Indonesia Jakarta Barat"<<endl;
    cout<<"Tanggal Lahir  : 30 Oktober 2003\n\n";
    cout<<"Bagaimana cara kerja dari program ini ?"<<endl;
    cout<<"1. Pilihlah Operator yang\ningin kalian gunakan."<<endl;
    cout<<"2. Masukan angka sesuai perintah yang\ndikeluarkan oleh operator yang kita pilih.\n";
    cout<<"3. Hasil akan keluar dengan benar\njika kalian benar menggunakannya.\n";               
    cout<<"\n★Latest Update by Developer : \n";
    cout<<"Indonesia Jakarta Barat - 12 Oktober 2020 - 18.52 A.M WIB \n";
pilihan();
}
//50. Keluar (out)
int keluar(){
  Qwerty();
    cout<<"Terimakasih Sudah Menggunakan Kalkulator Sederhana ini."<<endl;
    cout<<"Please give me stars and comment if you want to ask something with this calculator."<<endl;
    Qwerty();
pilihan();
}
//Salah (False / Wrong)
int salah(){
char Qwerty;
cout<<"Perintah Anda Salah / Tidak Relevan !"<<endl;
pilihan();
}
//Pilihan (selection)
int pilihan(){
float pil;
cout<<endl;
cout<<"Masukkan pilihan anda : "; cin>>pil;
if(pil==1){
penjumlahan();
}else if(pil==2){
pengurangan();
}else if(pil==3){
perkalian();
}else if(pil==4){
pembagian();
}else if(pil==5){
mod();
}else if(pil==6){
pangkat2();
}else if(pil==7){
pangkat3();
}else if(pil==8){
pangkatm(); 
}else if(pil==9){
sinus();
}else if(pil==10){
cosinus();
}else if(pil==11){
tangen();
}else if(pil==49){
info();
}else if(pil==50){
keluar();
}else {
salah();
}
}
int main(int argc, const char* argv[]){
cout<<"\tProgram Kalkulator Sederhana"<<endl;
cout<<"\t        2 Bilangan\n\n";
cout<<"Pilih Operator Dasar Aritmatika"<<endl;
cout<<"-------------------------------"<<endl;
cout<<"01.  Penjumlahan    05.  Modulus "<<endl;
cout<<"02.  Pengurangan    06.  Pangkat2"<<endl;
cout<<"03.  Perkalian      07.  Pangkat3"<<endl;
cout<<"04.  Pembagian      08.  Perpangkatan "<<endl;
cout<<"------------------------------------"<<endl;
cout<<"operator dasar aritmatika lanjutan"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"09. Sinus"<<endl;
cout<<"10. Cosinus"<<endl;
cout<<"11. Tangen"<<endl;
cout<<"49. Informasi"<<endl;
cout<<"50. Keluar"<<endl;
pilihan();

getch();
cin.get();
    return 0;
}
