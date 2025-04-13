#include<iostream>
#include<algorithm>
using namespace std;
// Ý tưởng: Xuất phát từ cuối dãy, đỗi chỗ các cặp phần tử kề cận đưa phần tử nhỏ nhất về đầu 

void BubbleSort(int a[], int n){
   for(int i = 0 ; i < n - 1; i++){
      for(int j = n - 1; j > i; j--){
         if(a[j] < a[j - 1]) // so sánh cặp phần tử kề cận bắt đầu từ cuối dãy 
            swap(a[j],a[j - 1]);
      }
   }
}
int main (){
   int ds[] = {54,28,30,18,24,18,12,7};
   int n = sizeof(ds) / sizeof(int);
   BubbleSort(ds,n);
   for(int i = 0; i < n ; i++){
      cout<<ds[i]<<" ";
   }
}