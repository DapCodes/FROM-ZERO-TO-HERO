#include <iostream>
using namespace std;

int main()
{
    int jantan, betina, pertiga;

    // banyaknya bebek saat ini
    jantan = 63;
    betina = 192;

    // setelah bulan pertama
    betina = betina + jantan;

    pertiga = jantan / 3.0;
    jantan = jantan - pertiga;

    // setelah bulan kedua
    jantan = jantan + betina;
    betina = betina - 10;

    // cetak total bebek
    cout << jantan + betina << endl;
}
