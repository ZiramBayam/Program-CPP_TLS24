#include <iostream>
#include <string>

using namespace std;

int main() {
    double awal, hasil;
    string s, t;

    cout << "Dari satuan apa? (c/celsius, f/fahrenheit, r/reamur, k/kelvin)" << endl;
    cin >> s;

    cout << "Masukkan angka: " << endl;
    cin >> awal;

    cout << "Ke satuan apa? (c/celsius, f/fahrenheit, r/reamur, k/kelvin)" << endl;
    cin >> t;

    if (s == "c" || s == "celsius") {
        if (t == "f" || t == "fahrenheit") {
            hasil = (awal * 9.0 / 5.0) + 32.0;
        }
 else if (t == "r" || t == "reamur") {
            hasil = awal * 4.0 / 5.0;
        }
 else if (t == "k" || t == "kelvin") {
            hasil = awal + 273.0;
        }
    }
 else if (s == "f" || s == "fahrenheit") {
        if (t == "c" || t == "celsius") {
            hasil = (awal - 32.0) * 5.0 / 9.0;
        }
 else if (t == "r" || t == "reamur") {
            hasil = (awal - 32.0) * 4.0 / 9.0;
        }
 else if (t == "k" || t == "kelvin") {
            hasil = (awal - 32.0) * 5.0 / 9.0 + 273.0;
        }
    }
 else if (s == "r" || s == "reamur") {
        if (t == "c" || t == "celsius") {
            hasil = awal * 5.0 / 4.0;
        }
 else if (t == "f" || t == "fahrenheit") {
            hasil = (awal * 9.0 / 4.0) + 32.0;
        }
 else if (t == "k" || t == "kelvin") {
            hasil = (awal * 5.0 / 4.0) + 273.0;
        }
    }
 else if (s == "k" || s == "kelvin") {
        if (t == "c" || t == "celsius") {
            hasil = awal - 273.0;
        }
 else if (t == "f" || t == "fahrenheit") {
            hasil = (awal - 273.0) * 9.0 / 5.0 + 32.0;
        }
 else if (t == "r" || t == "reamur") {
            hasil = (awal - 273.0) * 4.0 / 5.0;
        }
    }
 else {
        cout << "Satuan yang dimasukkan tidak valid" << endl;
        return 1;
    }

    cout << "Hasil konversi: " << hasil << endl;
    
    return 0;
}