#include <iostream>
#include <algorithm>
using namespace std;

void QuickSort(int a[],int left, int right ){
    int i = left; int j = right;
    int x = a[(left + right) / 2];
    do
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j ){
            swap(a[i], a[j]);
            i++; j--;
        }
    } while ( i <= j );
    if (left < j)
    {
        QuickSort(a,left,j);
    }
    if (right > i)
    {
        QuickSort(a,i,right);
    } 
}

int main(){
    int mang[] = {50,8,24,12,3,9,4};
    int n = sizeof(mang)/sizeof(int);
    QuickSort(mang,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << mang[i] << " ";
    }

    
    
}
