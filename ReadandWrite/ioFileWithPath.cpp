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

    //unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu bari
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")
            break;
        //menulis dan memasukkan nilai dari "baris" ke dalam file
        outfile << baris << endl;
    }
    
}