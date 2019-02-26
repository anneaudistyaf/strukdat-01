/*
NAMA PROGRAM    : Konversi Celcius ke Fahrenheit
NAMA            : Anne Audistya Fernanda
NPM             : 140810180059
DESKRIPSI       : Mencari suhu Fahrenheit dari Celcius menggunakan fungsi
TANGGAL         : 26 Februari 2019
*/

#include <iostream>

using namespace std;

void fahrenheit()
{
    float fahren;
    int celci;

    cout<<"Masukkan Celcius  :  "; //input celcius
    cin>>celci;
    cout<<endl;

    fahren = ((celci * 1.8) + 32); //rumus konversi celcius ke fahrenheit
    cout<< "Fahrenheit : " << fahren << endl;

}


int main ()
{
 int celci;
 float fahren;
 fahrenheit();
}
