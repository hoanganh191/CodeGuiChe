#include <iostream>
using namespace std;

int linear(int a[], int x, int n){
    for(int i =0; i<n ; i++){
        if(a[i]== x){
            return i;
        }
    }
}

int binarySearch(int a[], int n, int key){
    int left = 0; int right = n -1; int mid;
    while(left <= right){
        mid = (left + right)/2;
        if(a[mid] == key){
            return mid;
        }
        if(a[mid] < key){
           left = mid +1;
        }
        if(a[mid] > key){
            right = mid -1;
        }

    }
    return -1;
}