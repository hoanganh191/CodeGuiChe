#include<iostream>
#include<algorithm>

using namespace std;

void vunDong(int a[], int i, int n){
    int largest = i;
    int left = 2 *i +1;
    int right = 2*i +2;

    if(a[largest] < a[left] && left<n){
        largest = left;
    }
    if(a[largest] < a[right] && right<n){
        largest = right;
    }

    if(largest != i){
        swap(a[i],a[largest]);
        vunDong(a,largest,n);
    }

}

void sxVunDong(int a[], int n){
    for(int i = n/ 2 -1; i>=0; i--){
        vunDong(a,i,n);
    }
    for(int i = n-1; i>0; i--){
        swap(a[0], a[i]);
        vunDong(a,0,i);
    }
}