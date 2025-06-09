#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); //melemparkan sebuah integer maha
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a)
    {
        //blok ini akan dieksekusi
        cout << a << " : Pengecualian ini akan dieksekusi" << endl;
    }
    catch (...)
    {
        //Jika selain integer maka block ini akan dieksekusi
        cout << "Default Pengecualian Dieksekusi" << endl;
    }

    return 0;
    
}