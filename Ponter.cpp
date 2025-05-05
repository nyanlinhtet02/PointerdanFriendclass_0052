#include<iostream>
using namespace std;

int main(){

    //dereference
    int a= 10;
    int b= 5;
    int y= 21;
    int* c= &a;


cout<<"Alamat Memori:" << c <<endl;
cout<<"Nilai Dari C: " << *c << endl;
c = &y;

cout<<"Alamat memori: " << c <<endl;
cout<<"Nilai dari C:" << *c << endl;


    //reference






}