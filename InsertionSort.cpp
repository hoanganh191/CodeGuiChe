#include<iostream>
#include<algorithm>

using namespace std;

void InsertionSort(int a[], int n )
{
    int x, pos;
    for(int i = 1; i < n; i++){
        x = a[i] ; pos = i -1;
        while(pos >=0 && a[pos] > x ){
            a[pos +1] = a[pos];
            pos --;
        }
        a[pos +1 ] = x;

    }
    
}
int main(){
    int mang[] = { 54, 23,5,17, 19,3,7,38};
    int n = sizeof(mang) / sizeof(int);
    InsertionSort(mang,n);
    for(int i =0; i< n; i++)
    {
        cout<<mang[i]<<" ";
    }
}