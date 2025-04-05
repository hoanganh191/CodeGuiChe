#include<iostream>
using namespace std;
 void Bublesort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=n-1;j>i;j--)
    if(a[j]<a[j-1])
    swap(a[j],a[j-1]);
 }