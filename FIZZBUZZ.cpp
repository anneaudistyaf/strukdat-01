/*
NAMA PROGRAM    : FIZZ BUZZ
NAMA            : Anne Audistya Fernanda
NPM             : 140810180059
DESKRIPSI       : Mencari FizzBuzz dengan looping pada fungsi
TANGGAL         : 26 Februari 2019
*/

#include <iostream>

using namespace std;

void fizzbuzz () { //looping fizzbyzz
    for(int i=1;i<=100;i++){
        if(i%3==0) //jika bisa dibagi 3
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0) //jika bisa dibagi 5
        {
            cout<<"Buzz"<<endl;
        }
        else if(i%15==0) //jika bisa dibagi 3 dan 5
        {
        cout<<"FizzBuzz"<<endl;
        }
        else cout<<i<<endl; //jika tidak bisa dibagi keduanya
    }}

int main() {

    fizzbuzz();
    }

