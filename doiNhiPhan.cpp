//De bai doi 1 so thap phan it nhat co 3 chu so sang nhi phan

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

void doiNhiPhan(int soThapPhan){
    if (soThapPhan < 100)
    {
        cout << "Can nhap so > 100 theo de bai";
        return;
    }

    stack<int> dsPhanDu;
    while (soThapPhan > 0)
    {
        dsPhanDu.push(soThapPhan%2);
        soThapPhan = soThapPhan / 2;
    }

    while (!dsPhanDu.empty())
    {
        cout << dsPhanDu.top();
        dsPhanDu.pop();
    }
    
    
    
    
}

int main(){
    doiNhiPhan(189);

}