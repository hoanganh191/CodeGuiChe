#include <iostream>
#include <algorithm>

using namespace std;

int ucln(int a, int b)
{
    if (a == 0 && b == 0) {
        cout << "Khong ton tai ucln cho 2 so (0,0)" << endl;
        return -1;
    }

    if (b == 0)
        return a;

    return ucln(b, a % b);
}


int main()
{
    cout << ucln(0, 50);
}