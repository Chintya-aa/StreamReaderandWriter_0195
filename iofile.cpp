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
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // Membuat objek input file stream
    ifstream infile;
    // Membuka file yang di tuliskan
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan Membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // Melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini 
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selsai
        infile.close();
    }
}

