#include <iostream>
#include <algorithm>

using namespace std;

int ucln(int so1, int so2)
{

    if (so2 == 0 && so1 == 0)
    {
        cout << "Khong ton tai ucln cho 2 so (0,0) : " << endl;
        return -1;
    }

    if (so2 == 0 && so1 != 0)
    {
        return so1; // Neu co 1 so = 0 thi ucln la so con lai do 0 chia het cho tat ca cac so
    }

    if (so1 % so2 == 0)
    {
        return so2;
    }
    else
    {
        return ucln(so2, so1 % so2);
    }
}

int main()
{
    cout << ucln(0, 50);
}