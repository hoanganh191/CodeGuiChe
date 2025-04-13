#include <iostream> 
#include <algorithm>
using namespace std;
// Ý tưởng: Chọn trong dãy phần tử có gí trị nhỏ nhất và đổi chỗ với phần tử đầu 
// LƯợt thứ 2 tương tự như vậy với phần tử thứ 2 
// Tiếp tục với n - 1 lượt được dãy sắp xếpxếp

void SelectionSort(int a[], int n) {
    for(int i = 0 ; i < n - 1; i++){
        int min = i; // vị trí của phần tử nhỏ nhất 
        for(int j = i + 1 ; j < n ; j++){ 
            if(a[j] < a[min]) 
                min = j; // cập nhật vị trí của phần tử nhỏ nhấtnhất
        }
        if(min != i)
            swap(a[i],a[min]);
            
    }
}
int main(){
    int ds[] = {54,28,30,18,24,18,12,7};
    int n = sizeof(ds) / sizeof(int);
    SelectionSort(ds,n);
    for(int i = 0 ; i < n; i++){
        cout<<ds[i]<<" ";
    }
}