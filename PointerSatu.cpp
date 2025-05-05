#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "no induk = " <<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1};//object mhs
    mhs.showNim();//member akses operator

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}