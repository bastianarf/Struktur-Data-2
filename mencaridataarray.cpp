#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int angka[100],caridata, posisi=0;
    cout << "Masukkan jumlah data : ";
    cin >> n;
    cout << endl;
    for (int a=0;a<n;a++)
    {
        cout << "Masukkan nilai data ke "<<a+1<<" : ";
        cin >> angka[a];
    }
    cout << "Tampilkan data \n";
    for (int a=0;a<n;a++)
    {
       cout << angka[a];
       cout << ",";
    }
    cout << endl;
    cout << "Masukkan nilai yang dicari : ";
    cin >> caridata;
    for (int a=0;a<n;a++)
    {
        if (cari == angka[a])
        {
            cout<<"Nilai "<<cari<<" ditemukan. Terdapat pada index ke "<<a+1;
            cout<<endl;
        }
    }
}
