// Kepala (Header) Bagian C++
#include <math.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <conio.h>
using namespace std;
void pilihan();
// function of prototype
int balok_volume(double panjang, double lebar, double tinggi);
int balok_luas(double panjang, double lebar, double tinggi);
int balok_gabungan(double panjang, double lebar, double tinggi, double panjang1, double lebar2, double tinggi3);
int faktorial (int n);
void Qwerty(){
cout<<"\t-----------------------------------------------------------"<<endl;
}
//Operasi Input & Output Operator C++
//1. Penjumlahan (+)
void penjumlahan(){
int bil1, bil2, hasil;
    cout<<"\n1. Operasi Penjumlahan (+)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 + bil2;
    cout<<"   Hasil dari "<<bil1<<" + "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//2. pengurangan (-)
void pengurangan(){
int bil1, bil2, hasil; 
    cout<<"\n2. Operasi Pengurangan (-)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 - bil2;
    cout<<"   Hasil dari "<<bil1<<" - "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//3. Perkalian (*)
void perkalian(){
int bil1, bil2, hasil;
    cout<<"\n3. Operasi Perkalian   (*)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 - bil2;
    cout<<"   Hasil dari "<<bil1<<" * "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//4. Pembagian (/)
void pembagian(){
int bil1, bil2, hasil;
    cout<<"\n4. Operasi Pembagian   (/)"<<endl;
    cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan kedua   : ";   cin>>bil2;
    hasil = bil1 + bil2;
    cout<<"   Hasil dari "<<bil1<<" / "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//5. Dimodulus (%)
void mod(){
int bil1, bil2, hasil;
    cout<<"\n5. Operasi Modulus (%)"<<endl;
    cout<<"   Masukkan Bilangan Pertama : "; cin>>bil1;
    cout<<"   Masukkan bilangan Kedua   : ";   cin>>bil2;
    hasil = bil1 % bil2;
    cout<<"   Hasil dari "<<bil1<<" % "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//6. Perpangkatan 2 [auto](**)
void pangkat2(){
float bil, hasil;
    cout<<"\n6. Operasi Pangkat 2 (**)"<<endl;
    cout<<"   Masukkan bilangan : "; cin>>bil;
    hasil = bil * bil;
    cout<<"  Hasil dari "<<bil<<" pangkat 2 = "<<hasil<<endl;
pilihan();
}
//7. Perpangkatan 3 [auto](***)
void pangkat3(){
float bil, hasil;
    cout<<"\n7. Operasi Pangkat 3 (***)"<<endl;
    cout<<"   Masukkan bilangan : "; cin>>bil;
    hasil = bil * bil * bil;
    cout<<"  Hasil dari "<<bil<<" pangkat 3 = "<<hasil<<endl;
pilihan();
}
//8. Perpangkatan Manual (bil1^bil2)
void pangkatm(){
    double bil1, bil2, hasil;
    cout<<"\n8. Operasi Perpangkatan Manual (pow)"<<endl;
    cout<<"    Masukan angka pertama : "; cin>>bil1;
    cout<<"    Masukan angka pangkat : "; cin>>bil2;
    hasil = pow(bil1, bil2);
    cout<<"    Hasil dari Pangkat manual : "<<bil1<<" ^ "<<bil2<<" = "<<hasil<<endl;
pilihan();
}
//9. Sinus ()
void sinus(){
  double bil, hasil;
  cout<<"\n9. Operasi Sinus"<<endl;
  cout<<"   Masukan nilai sinus : "; cin>>bil;
  hasil = sin(bil);
  cout<<"    Hasil Dari Sinus : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//10. Cosinus ()
void cosinus(){
  double bil, hasil;
  cout<<"\n10. Operasi Cosinus"<<endl;
  cout<<"   Masukan nilai cosinus : "; cin>>bil;
  hasil = cos(bil);
  cout<<"   Hasil Dari Cosinus : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//11. Tangen ()
void tangen(){
  double bil, hasil;
  cout<<"\n11. Operasi Tangen"<<endl;
  cout<<"    Masukan nilai tangen"; cin>>bil;
  hasil = tan(bil);
  cout<<"    Hasil Dari Tangen : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//12. Logaritma Natural (log)
int log(){
    double bil, hasil;
    cout<<"\n12. Operasi Logaritma (log)"<<endl;
    cout<<"    Masukan Nilai Logaritma : "; cin>>bil;
    hasil = log(bil);
    cout<<"    Hasil Log dari : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//13. Akar kuadrat (√)
int akar(){
    double bil, hasil;
    cout<<"\n13. Operasi Akar Kuadrat (√)"<<endl;
    cout<<"    Masukan nilai akar : "; cin>>bil;
    hasil = sqrt(bil);
    cout<<"    Hasil dari akar kuadrat : "<< bil <<" = "<<hasil<<endl;
pilihan();
}
//14. Faktorial & prototype
int faktorial(){
  int n, hasil;
  cout<<"\n14.  Operasi Faktorial "<<endl;
  cout<<"     Masukan nilai dari n :  "; cin>>n;
  hasil = faktorial (n);
  cout<<"     Hasil Dari Faktorial n adalah : " << hasil << endl;
  pilihan(); 
}
//15. Kubus
int kubus(){
    double a, volume, luas, keliling, sisi;
    cout<<"\n15. Operasi Kubus "<<endl;
    cout<<"     Pilih 4 opsi yang ada di bawah: "<<endl;
    cout<<"1.Volume | 2.Luas | 3.Keliling | 4.Sisi : "; cin >> a;
    if (a == 1){
        cout<<"Volume kubus dari angka : "; cin >> sisi;
        volume = sisi * sisi * sisi * sisi;
        cout<<"Hasil dari " << sisi << " Adalah: " << volume << endl;
    } else if (a == 2){
        cout<<"luas kubus dari angka : "; cin >> sisi;
        luas = 6 * (sisi * sisi);
        cout <<"Hasil dari " << sisi << " Adalah: " << luas <<endl;
    } else if (a == 3){
        cout <<"Keliling kubus dari angka : "; cin >> sisi;
        keliling = 12 * sisi;
        cout <<"Hasil dari " << sisi << " Adalah: " << keliling <<endl;
    } else if (a == 4){
        cout <<"Luas salah satu sisi dari angka : "; cin >> sisi;
        sisi = sisi * sisi;
        cout <<"Hasil dari " << sisi << " Adalah: " << sisi <<endl;
    }
pilihan();
}
//16. Balok & prototype
int balok(){
    double a, panjang, tinggi, lebar, volume, volume2, volume3, luas, panjang1, lebar2, tinggi3, hasil;
    cout<<"\n16. Operasi Balok"<<endl;
    cout<<"    Pilih bebrapa opsi dibawah: "<<endl;
    cout<<"1. Volume | 2.Luas | 3.Volume Gabungan : "; cin >> a;
    if (a == 1){
        cout<<"1.Volume balok dari angka panjang : "; cin >> panjang;
        cout<<"2.Volume balok dari angka lebar   : "; cin >> lebar;
        cout<<"3.Volume balok dari angka tinggi  : "; cin >> tinggi;
        volume = panjang * lebar * tinggi;
        cout <<"Hasil dari " << panjang << " * " << lebar << " * " << tinggi << " Adalah: " << volume << endl;
    } else if (a == 2){
        cout<<"1.Volume balok dari angka panjang : "; cin >> panjang;
        cout<<"2.Volume balok dari angka lebar   : "; cin >> lebar;
        cout<<"3.Volume balok dari angka tinggi  : "; cin >> tinggi;
        luas = balok_luas(panjang,lebar,tinggi);
        cout <<"Hasil dari inputan" << " Adalah: " << luas << endl;
    } else if (a == 3){
        cout<<"Masukan inputan pada bangun ke-1"<<endl;
        cout<<"1.Input p : "; cin >> panjang;cout<<"l : "; cin >> lebar;cout<<"t : ";  cin >> tinggi;
        cout<<"Masukan inputan pada bangun ke-2"<<endl;
        cout<<"2.Input p x l x t : "; cin >> panjang1; cin >> lebar2;  cin >> tinggi3;
        hasil = balok_gabungan(panjang, lebar, tinggi, panjang1, lebar2, tinggi3);
        cout <<"Hasil gabungan volume bangun 1 & 2 Adalah: " << hasil << endl;
    }
pilihan();
}
//17. Suhu
int suhu(){
  double celcius, reamur, fahrenheit, kelvin, hasil;
  cout<<"\n17.  Operasi Satuan Konversi Suhu"<<endl;
  cout<<"Masukan satuan konversi suhu: "; cin>>celcius;
  celcius = celcius;
    cout<<"Celcius = " << celcius << endl;
  reamur = celcius * 4 / 5;
    cout<<"Reamur = " << reamur << endl;
  fahrenheit = celcius * 9 / 5 + 32;
    cout<<"Fahrenheit = " << fahrenheit << endl;
  kelvin = celcius + 273;
  cout<<"Kelvin = " << kelvin << endl;
pilihan();
}
//18. Lingkaran
int lingkaran(){
  double a, jari, diameter, keliling, luas, hasil;
  cout<<"\n18.  Operasi bangun lingkaran"<<endl;
  cout<<"Masukan Opsi Satuan Konversi "<<endl;
  cout<<"1.Diameter | 2.Luas | 3.Keliling: "; cin >> a;
  if (a == 1){
    cout<<"Masukan angka: "; cin >> jari;
      diameter = 2 * jari;
      cout<<"Diameter dari "<<jari<<" Adalah: "<<diameter<<endl;
  }else if(a == 2){
      cout<<"Masukan angka: "; cin >> jari;
      luas = jari * jari * 22/7;
      cout<<"Keliling dari "<<jari<<" Adalah: "<<luas<<endl;
  }else if(a == 3){
      cout<<"Masukan angka: "; cin >> jari;
      keliling = 2 * 3.14 * jari;
      cout<<"Keliling dari "<<jari<<" Adalah: "<<keliling<<endl;
  }
pilihan();
}
//49. Informasi Data Developer & How to use this program
void info(){
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
void keluar(){
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
void pilihan(){
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
cout<<"\tProgram Kalkulator Sederhana\n";
cout<<"\t        2 Bilangan\n\n";
cout<<"Pilih Operator Dasar Aritmatika\n";
cout<<"-------------------------------\n";
cout<<"01.  Penjumlahan    05.  Modulus \n";
cout<<"02.  Pengurangan    06.  Pangkat2\n";
cout<<"03.  Perkalian      07.  Pangkat3\n";
cout<<"04.  Pembagian      08.  Perpangkatan \n";
cout<<"------------------------------------\n";
cout<<"operator dasar aritmatika lanjutan\n";
cout<<"------------------------------------\n";
cout<<"09. Sinus\n";
cout<<"10. Cosinus\n";
cout<<"11. Tangen\n";
cout<<"12. Logaritma Natural\n";
cout<<"13. Kuadrat\n";
cout<<"14. Faktorial\n";
cout<<"---------------------\n";
cout<<"Operator complex Lain \n";
cout<<"---------------------\n";
cout<<"15. Kubus\n";
cout<<"16. Balok\n";
cout<<"17. Suhu\n";
cout<<"18. Lingkaran\n";
cout<<"-------------\n";
cout<<"49. Informasi\n";
cout<<"50. Keluar\n";
pilihan();

getch();
cin.get();
    return 0;
}
 // prototype from Balok
  int balok_volume(double panjang, double lebar, double tinggi){
    return panjang * lebar * tinggi;
  }
  // Prototype from Balok
  int balok_luas(double panjang, double lebar, double tinggi){
    return 2*(panjang*lebar*panjang*tinggi*lebar*tinggi);
  }
  // Prototype from Balok
  int balok_gabungan(double panjang, double lebar, double tinggi, double panjang1, double lebar2, double tinggi3){
      double volume1, volume2, volume3;
      volume3 = (volume1=panjang*lebar*tinggi,
       volume2=panjang1*lebar2*tinggi3, 
       (volume1+volume2));
      return volume3;
  }
  // Prototype from Faktorial 
  int faktorial (int n){
    if(n <= 1){
      return n;
    } else {
      return n * faktorial (n - 1);
    } 
  }
