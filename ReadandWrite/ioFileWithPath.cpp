#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;
    string NamaFIle;

    cout << "Masukkan Nama File: ";
    cin >> NamaFIle;

    //membuka file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke seluruh nama file
    outfile.open(NamaFIle + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
}