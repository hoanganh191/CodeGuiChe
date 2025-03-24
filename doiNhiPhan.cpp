//De bai doi 1 so thap phan it nhat co 3 chu so sang nhi phan

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int doiNhiPhan(int soThapPhan){
    if (soThapPhan < 100)
    {
        cout << "Can nhap so > 100 theo de bai";
        return -1;
    }

    stack<int> dsPhanDu;
    while (soThapPhan > 0)
    {
        dsPhanDu.push(soThapPhan%2);
        soThapPhan = soThapPhan / 2;
    }

    long ketQua = 0;
    while (!dsPhanDu.empty())
    {
        ketQua = ketQua * 10 + dsPhanDu.top();
        dsPhanDu.pop();
    }
    
    return ketQua;
    
    
    
}

int main(){
    cout << doiNhiPhan(125) << endl;

}