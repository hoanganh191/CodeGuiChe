#include <iostream>

using namespace std;

void findMax(int a[],int n){
    if (n < 0)
    {
        cout << "Khong ton tai gia tri trong mang";
        return;
    }
    
    //gia su gia tri dau tien trong mang la lon nhat
    int max = a[0]; //gia tri 
    int pos = 0; //vi tri
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            pos = i;
        }
        
    }

    cout << "\nGia tri lon nhat trong mang la : " << max << endl;
    cout << "Vi tri cua no la : " << pos << endl;
    
    
}

int main(){
    int ds[] = {5,77,5,6,22,33,55,24,56,77};
    int n = sizeof(ds)/sizeof(int);
    findMax(ds,n);
}