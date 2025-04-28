#include <iostream>
using namespace std;

class lingkaran {
    public :
    double jarijari;
    double LuasLingkaran;

    void inpudata() {
        cout << "Masukkan jarijari " << endl;
        cin >> jarijari;
    }
    double hitungLuas() {
        return 3.14 * jarijari * jarijari;
    }
    };

int main() {
    lingkaran bulet;
    bulet.inpudata();
    cout << endl;
    cout << "Luasnya adalah = " << bulet.hitungLuas() << endl;
    cout << endl;
}