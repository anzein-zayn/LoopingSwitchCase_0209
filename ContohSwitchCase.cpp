#include <iostream>
using namespace std;

float LuasPersegiPanjang(float a, float b){
    return a * b;
}

float LuasLingkaran(float a) {
    return 3.14*a*a;
}

int main(){
    int Pilihan;
    float Panjang, Lebar;
    float Jejari;

    do{
        cout << " Menu " << endl;
        cout << " 1. Luas Persegi Panjang " << endl;
        cout << " 2. Luas Lingkaran " << endl;
        cout << " 3. Keluar " << endl;

        cout << " Pilihan (1/2/3) = ";
        cin >> Pilihan;
        cout << endl;
        switch (Pilihan)
        {
            case 1:
                cout << " Hitung Luas Persegi Panjang " << endl;
                cout << " Masukan Panjang = ";
                cin >> Panjang;
                cout << " Masukan Lebar = ";
                cin >> Lebar;
                cout << " Luas Persegi Panjang = " << LuasPersegiPanjang(Panjang, Lebar) << endl;
                break;
                
            case 2:
                cout << " Hitung Luas Lingkaran " << endl;
                cout << " Masukan Jari - Jari = ";
                cin >> Jejari;
                cout << " Luas Lingkaran = " << LuasLingkaran(Jejari) << endl;
                break;
            case 3:
                break;
            default:
                cout << " Pilihan Salah, Pilihan Harus di Antara 1-3.";
                break;
        }
        cout <<endl;
    }while (Pilihan !=3);
}
