#include <iostream>
#include <algorithm>

using namespace std;
int binary_Search(int a[], int left, int right, int key)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            return binary_Search(a, mid + 1, right, key);
        }
        else
        {
            return binary_Search(a, left, mid - 1, key);
        }
    }

    //Neu khong tim thay
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    cout << binary_Search(a,0,n-1,7) << endl;
}