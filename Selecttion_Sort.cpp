#include <iostream> 
#include <algorithm>
using namespace std;

void selectionSort(int a[], int n){
    for(int i = 0; i< n -1; i++){
        int minIndex = i;
        for(int j = i +1; j <n ; j++){
            if(a[i] > a[j])
            minIndex = j;
        }
        if(minIndex != i){
            swap(a[minIndex], a[i]);
        }
    }
}