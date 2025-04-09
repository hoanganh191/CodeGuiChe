#include <iostream>
#include <algorithm>

using namespace std;

// n la so phan tu trong mang
// i la dinh dang xet
void vunDong(int a[], int i, int n)
{
    int left = 2 * i + 1;  // vi tri cua nut con trai trong mang
    int right = 2 * i + 2; // vi tri cua nut con phai trong mang
    int largest = i;       // Gia su vi tri lon nhat cua 3 node dang xet ( node cha va 2 node con) la node cha

    // Neu node con ben trai lon hon, cap nhat vi tri lon nhat = ben trai;
    if (a[largest] < a[left] && left < n)
    {
        largest = left;
    }
    // Neu node con ben phai lon hon, cap nhat vi tri lon nhat = ben phai;
    if (a[largest] < a[right] && right < n)
    {
        largest = right;
    }

    /* Neu gia thiet node cha lon nhat sai => ta doi gia tri cua vi tri lon nhat voi node cha voi vi tri lon nhat,
     sau do thuc hien vun dong tu vi tri node con (larget) de dam bao cay nhi phan dung quy tac vun dong */
    if (largest != i)
    {
        swap(a[i], a[largest]);
        vunDong(a, largest, n);
    }
}

void sapXepVunDong(int a[], int n)
{
    // Thuc hien vun dong tu node cha cuoi cung ( Cong thuc to se chung minh sau)
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        vunDong(a, i, n);
    }

    // Sau khi cay vun dong ve dang chuan , ta doi node dau va cuoi sau do thuc hien vun dong tu node 0 ( ngat node cuoi)
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        vunDong(a, 0, i);
    }
}

int main()
{
    int ds[] = {5, 55, 16, 22, 33, 15, 4, 66, 16, 22, 23};
    int n = sizeof(ds) / sizeof(int);
    sapXepVunDong(ds, n);
    for (int i = 0; i < n; i++)
    {
        cout << ds[i] << " ";
    }
}