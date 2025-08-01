#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan Nama File: ";
    cin >> NamaFile;

    //membuat obyek output file stream mode menulis.
    ofstream outfile;
    //membuka file
    outfile.open(NamaFile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")
            break;
        //menulis dan memasukkan nilai dari "baris" ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuat objek input file stream dalam mode membaca
    ifstream infile;
    //membuka file
    infile.open(NamaFile + ".txt");

    cout << endl
         << ">= Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        /* code */
    
    //melakukan perulangan setiap baris
    while (getline(infile, baris))
    {
        //dan tampilkan di sini
        cout << baris << "\n";
    }
    //tutup file tersebut setelah selesai
    infile.close();
}
//jika tidak ditemukan file maka akan menampilkan ini
else
    cout << "Unable to open file";
return 0;
    
}