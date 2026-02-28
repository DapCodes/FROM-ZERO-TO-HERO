#include <iostream>
using namespace std;

int main()
{
    int luas_kandang = 12;
    int count = 0;

    while (count < 3)
    {
        luas_kandang += 7;
        cout << luas_kandang << endl;

        count += 1;
    }
}
