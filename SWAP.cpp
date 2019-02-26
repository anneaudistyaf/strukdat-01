/*
NAMA PROGRAM    : SWAP
NAMA            : Anne Audistya Fernanda
NPM             : 140810180059
DESKRIPSI       : Men-swap suatu integer dengan fungsi
TANGGAL         : 26 Februari 2019
*/

#include <iostream>
using namespace std;


void swap (int& x, int& y) {
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main() {
    int x,y;
    cout <<"x :"; //input nilai x
    cin >>x;
    cout<<"y :"; //input nilai y
    cin>>y;

    swap(x,y); //penukaran x dan y

    cout<<"\nSWAP\n"<<endl; //menampilkan hasil swap
    cout<<"X :"<<x<<endl;
    cout<<"Y :"<<y<<endl;

}
}
