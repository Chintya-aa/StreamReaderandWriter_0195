#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string namefile;

    cout << "Masukan Nama File : ";
    cin >> namefile;
    cin.ignore(); 

    // membuat objek output file stream.
    ofstream outfile;
    // membuka file untuk ditulisi.
    outfile.open(namefile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

   