#include <iostream>

using namespace std;

int segitiga(int alas, int tinggi){
    int hasil;
    hasil = (alas * tinggi) / 2;
    return hasil;
}

int main(){
    int a, b;
    cout <<"Inputkan Alas Segitiga : ";
    cin >>a;
    cout <<"Inputkan Tinggi Segitiga : ";
    cin >>b;
    cout <<"Luas Segitiga Adalah :" <<segitiga(a,b) <<endl;
}
