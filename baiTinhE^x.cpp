#include <iostream>
#include <cmath>

using namespace std;

double giaiThua(int n){
    double kq = 1;
    for (int i = 1; i <= n; i++)
    {
        kq = kq * i;
    }
    return kq;
    
}

double tinhEmuX(double x,int nguongSaiSoCucNho = 1e-10){
    double result = 1.0; // Số hạng đầu tiên (x^0/0!)
    double giaTriPhanSoDangXet; //De luu gia tri cua phan so dang xet
    int n = 1; //Phan so dang xet dang so mu la 1

    //Vong lap tinh tong cac phan so
    while (giaTriPhanSoDangXet >= nguongSaiSoCucNho)
    {
        giaTriPhanSoDangXet = pow(x,n) / giaiThua(n);
        result = result + giaTriPhanSoDangXet;
        n++;
    }
    
    return result;
}