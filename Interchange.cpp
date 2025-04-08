#include<iostream>
using namespace std;

void Interchange(int a[], int n){
    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main(){
    int mang[] = {51, 29, 20, 17, 25, 16, 13, 5};
    int n = sizeof(mang) / sizeof(int);
    Interchange(mang, n);
    for(int i = 0; i < n ; i++){
        cout << mang[i] << " ";
    }
    return 0;
}