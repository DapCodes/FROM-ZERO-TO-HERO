#include <iostream>
using namespace std;

int main()
{
    string nama1, nama2;
    int usia1, usia2, selisihUsia;

    nama1 = "Daffa Ramadhan";
    nama2 = "Dhea Febrianti";

    usia1 = 18;
    usia2 = 17;

    selisihUsia = usia1 - usia2;

    // << tahun + 10 << "-" << bulan << "-" << tanggal + 7 << endl;

    cout << "Hallo Saya " << nama1 << " usia saya " << usia1 << " tahun. Siapa nama dan berapa usiamu?" << endl
         << "Haii " << nama1 << "Saya " << nama2 << " usia saya " << usia2 << " tahun. Salam kenal yaa" << endl
         << "Ternyata usia kita ga beda jauh yaa hanya " << selisihUsia << " tahun" << endl;
}