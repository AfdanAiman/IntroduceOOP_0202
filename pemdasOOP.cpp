#include <iostream>
using namespace std;

class hewan {
    private :
    string jeniskelamin;
    public :
    string tipe;
    string umur;

    void inputData() {
        cout << "Masukkan jenis kelamin = " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }
    void tampilhewan() {
        cout << "Jenis kelaminnya adalah" << jeniskelamin << endl;
    }

};
int main(){
    hewan ambon;
    ambon.inputData();
    cout << "Umurnya adalah" << ambon.umur << endl;
    cout << "Tipenya adalah" << ambon.tipe << endl;
    ambon.tampilhewan();
}