#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    //membuat objek output file stream.
    ofstream outfile;
    // membuka file untuk ditulis.
    outfile.open("contohfile.txy");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited lopp untuk menulis
    while (true) {
        cout << "- ";
        // Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
    }
}

