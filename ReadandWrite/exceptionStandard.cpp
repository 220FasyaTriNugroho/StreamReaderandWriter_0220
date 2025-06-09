#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda I
    try
    {
        array<int, 3> data = {10, 20, 30};
        //pesan array integer 3 elemen
        cout << data.at(4) << endl;
        //memanggil array elemen ke 5
    }
    catch(exception& e)
    {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        //akan dieksekusi karna array data hanya memiliki 3 elemen
    }
    cout << "Baris Program yang berakhir" << endl;

    return 0;
    
}